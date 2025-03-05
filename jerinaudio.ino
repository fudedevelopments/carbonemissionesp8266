#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "env.h"

#define MQ2_ANALOG A0  
#define MQ2_DIGITAL D0 
#define BUZZER_PIN D6
#define LED_PIN D7

bool alertActive = false;
const char WIFI_SSID[] = "PRAVEEN KUMAR";
const char WIFI_PASSWORD[] = "praveen1171@0";
const char THINGNAME[] = "jerinEsp8266";
const char MQTT_HOST[] = "a1gdcuo66d6mes-ats.iot.ap-south-1.amazonaws.com";
const char AWS_IOT_PUBLISH_TOPIC[] = "jerin/esp/pub";

const long interval = 5000;
const int8_t TIME_ZONE = -5;
unsigned long lastMillis = 0;

WiFiClientSecure net;
BearSSL::X509List cert(cacert);
BearSSL::X509List client_crt(client_cert);
BearSSL::PrivateKey key(privkey);
PubSubClient client(net);

LiquidCrystal_I2C lcd(0x27, 16, 2);
unsigned long alertStartTime = 0;

void NTPConnect() {
  Serial.print("Setting time using SNTP...");
  configTime(TIME_ZONE * 3600, 0, "pool.ntp.org", "time.nist.gov");
  time_t now = time(nullptr);
  
  while (now < 1510592825) { 
    delay(500);
    Serial.print(".");
    now = time(nullptr);
  }
  
  Serial.println("Time synchronized!");
}

void connectAWS() {
  delay(3000);
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  
  Serial.println("Connecting to WiFi...");
  lcd.setCursor(0, 0);
  lcd.print("WiFi: Connecting...");
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }
  
  Serial.println("WiFi Connected!");
  lcd.setCursor(0, 0);
  lcd.print("WiFi: Connected  ");

  NTPConnect();
  net.setTrustAnchors(&cert);
  net.setClientRSACert(&client_crt, &key);
  client.setServer(MQTT_HOST, 8883);
  
  Serial.println("Connecting to AWS IoT...");
  lcd.setCursor(0, 1);
  lcd.print("AWS: Connecting...");
  
  while (!client.connect(THINGNAME)) {
    Serial.print(".");
    delay(1000);
  }
  
  if (!client.connected()) {
    Serial.println("AWS IoT Timeout!");
    lcd.setCursor(0, 1);
    lcd.print("AWS: Failed     ");
    return;
  }
  
  Serial.println("AWS IoT Connected!");
  lcd.setCursor(0, 1);
  lcd.print("AWS: Connected  ");
}

void publishMessage(int carbonLevel) {
  StaticJsonDocument<200> doc;
  doc["carbon_level"] = carbonLevel;
  doc["alert_active"] = alertActive;
  
  char jsonBuffer[512];
  serializeJson(doc, jsonBuffer);
  
  client.publish(AWS_IOT_PUBLISH_TOPIC, jsonBuffer);
}

void setup() {
  Serial.begin(115200);
  
  pinMode(MQ2_DIGITAL, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  lcd.init();   
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Carbon Detector");
  delay(2000);
  
  lcd.clear();
  connectAWS();
}

void loop() {
  if (!client.connected()) {
    connectAWS();
  }
  
  client.loop();
  readCarbonSensor();
  handleAlert();
}

void readCarbonSensor() {
  int carbonAnalog = analogRead(MQ2_ANALOG); 
  int carbonDigital = digitalRead(MQ2_DIGITAL); 

  Serial.print("Carbon Analog Value: ");
  Serial.print(carbonAnalog);
  Serial.print(" | Carbon Digital Value: ");
  Serial.println(carbonDigital);

  lcd.setCursor(0, 0);
  lcd.print("Carbon Level:      ");
  lcd.setCursor(0, 1);
  lcd.print("AWS : connected");  
  lcd.setCursor(13, 0);
  lcd.print(carbonAnalog);
  lcd.print("   ");  

  if (millis() - lastMillis >= interval) {
    publishMessage(carbonAnalog);
    lastMillis = millis();
  }

  if (carbonAnalog > 1500 && !alertActive) {
    startAlert();
  }

  delay(1000);
}

void startAlert() {
  Serial.println("Carbon level high! Activating buzzer and LED...");
  alertActive = true;
  alertStartTime = millis();
}

void handleAlert() {
  if (alertActive) {
    unsigned long elapsedTime = millis() - alertStartTime;

    if (elapsedTime < 5000) { 
      if ((elapsedTime / 500) % 2 == 0) { 
        digitalWrite(LED_PIN, HIGH);
      } else {
        digitalWrite(LED_PIN, LOW);
      }
      
      digitalWrite(BUZZER_PIN, HIGH);
      lcd.setCursor(0, 1);
      lcd.print("ALERT: High CO2!");
    } else {
      digitalWrite(LED_PIN, LOW);
      digitalWrite(BUZZER_PIN, LOW);
      alertActive = false;
      Serial.println("Alert sequence complete.");
      lcd.setCursor(0, 1);
      lcd.print("Connected  ");
    }
  }
}
