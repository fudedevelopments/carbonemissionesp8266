
//Amazon trust services endpoint
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

//Device certificate
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWTCCAkGgAwIBAgIUcaTXE7A7h4h2iCqbzQUTUIV+i2cwDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTI1MDIyMzEyMTUx
MVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANplEeUqSzsVfEUO36Wz
Mt7lSJ6229uod2vMAQtMwc5H4NdjNbdUCSYfghKZjs6K6Gg96cfrZuRfY0XxRzBt
VI59NBMuGs5wc1aL5WwtoAl6kWraQ2hC5A9CtrlEQ37/04/q7tkR3VG2d00ua0bj
63Da4+isbC1hNtGhqbz39ZSP3IIU2Nvp8WFdHjtJCdc4zn3wdTbXmHVc6ojDSS55
dcdKmplZA5Y2QyCkKdL2dbjoYew6Ekq221GTrxUVBUTikGJLsnx1PIbv9Pox9xyC
JfEwT6hjAOn5b98k4UCTf3oHsuD42h4q57nImSXfr1do0zpz8FgtTGYWqSC6j/he
vsUCAwEAAaNgMF4wHwYDVR0jBBgwFoAUDCA2bAKRyP5ydVDbcrLFe1KM0/AwHQYD
VR0OBBYEFJorTeRElohuyM8O6xNqC4EZbe80MAwGA1UdEwEB/wQCMAAwDgYDVR0P
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBCAojrsj/bYV2W7AWmWQgtFkqs
PvigElV2YAxKdOGW9PW4zn79I/Tft7PskR37X5clQIBYJVv9tp7Q1zBjfAXBnPYn
AGTb/K0bUG6dX+V3Fe/GTi6BolwmPs8LOEksdreIHFhZEvaff+bfSo3C6ercCYAJ
YLs6EIsbULcHovgisD9AEqrqfYs6Qp3RlR/2SxRJnuiKi5zVEBN042el3acDwj2+
6RfFKMavS17HxWEwoaPHYSlx5lB8IJI4o5R7AmgmHQalBeNROEgFeaqdB2WfIit5
qSCxYrx9vrKBcfxXzQfOnBxXCLKvKYRurU77ShGEyXngtpgGMDmn9rJ5yPee
-----END CERTIFICATE-----
)KEY";


//Private key file
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEpgIBAAKCAQEA2mUR5SpLOxV8RQ7fpbMy3uVInrbb26h3a8wBC0zBzkfg12M1
t1QJJh+CEpmOzoroaD3px+tm5F9jRfFHMG1Ujn00Ey4aznBzVovlbC2gCXqRatpD
aELkD0K2uURDfv/Tj+ru2RHdUbZ3TS5rRuPrcNrj6KxsLWE20aGpvPf1lI/cghTY
2+nxYV0eO0kJ1zjOffB1NteYdVzqiMNJLnl1x0qamVkDljZDIKQp0vZ1uOhh7DoS
SrbbUZOvFRUFROKQYkuyfHU8hu/0+jH3HIIl8TBPqGMA6flv3yThQJN/egey4Pja
HirnuciZJd+vV2jTOnPwWC1MZhapILqP+F6+xQIDAQABAoIBAQDTNqhF789uRus2
hpn5UQPD2g+Pn92l5JoKYPQpj4RoEc/7vvE2akmm2xYbEvOwAVufZTFxrdKGz1Hd
VOm6hiIe5Cu22QIH4W1KqGWrZ7y9LhLxOkGy1e5ma+j36HM2oghjyZxRxxs6abOb
q2cI2mjbbna4kfjVMo2n1CeqoEyb7XQkTSLbcoHJBENL7Clc81qD778rDVnQHpuX
o1B+lnqT+QlPhQNXLknu7/k9J1kiKkDx930ip3+Kn/mTFvLZT+aOeeFyuLnRY5Db
iCS7eyFh5o+LJj0W5TOGyL6oHWdYt1YH732ZI/Ya/YeKHQE7dsUpxW0gW12wSFVe
Q/fyJbUJAoGBAPkaJ0bHvyTAp4K8vq6DFIdX31LDO5gFlt/PFO1A+CEE8SBT0CGj
Ok90Xhn/q4o/VGBExGw0jKjJQ3AsaQAduIwVpSzK8yv4UHs/v2QIboq1L5Bq1AML
i3JtPlvX8P4UEOSTuEuUqivSbtB7XwDnCAUxEQIgGFe4jwH8qIYCcBNfAoGBAOBx
PJ4GFvyxndEAkwLcqkcq79lHHykm4lL7aHvcSXuvbKAZQgLE8Oms7ancOXyAU2Tk
OoeNGD9NpRaURVdDzDD6Mk/45IZ4pStkOApNnePmYmd9g1N5lzwOvexgJQH91ftf
NBQB5jJfMov+W7P0UO/lwIK1tX9xdjbB3m19QaRbAoGBALh/Ym/OKghymJ8AZMqk
U2Qa9VE7QLxMB38kxX8kC6OJIX6sFQ+U8e8/ZSMkdk0isr/KryDlmvi4eLZwbiSj
3rgCoCAZARqkBBgFEyBoDle18tCoDvdiaZoKx5EG03ucKRbjQjDYn2Ftrp3Dgo4M
j6gou0wzsVPnYiQ6micHTzNJAoGBAJILfStCwTB7DztRyVeiaTbYDKxw6CjqAXmH
2IxIYpSWKPPgm6CbsDwN57SQ9eM6yYksLZ3IxQ9kIdmYb6qCFluEYrrBNUr/NFMQ
6pphuSzz2/KFrK/jvfI5kYI/abVrDBN+9q9SMQ1z/rszr05g203PTb6AKPMdzJOD
AY5zZARjAoGBAPIZJlH8XQ9qP9qQCZihI2iMIOxrO/rUmOZTKjI+0y/oGJppZaVu
FI6sBKRsBrRjBUpHx0+wUVN15zMR7LP9Sg3a36DfVJ7Zx917ZxQDLcW5D+phvGaA
gGvdNslK1Nq9GqZ3ZUwZL2FcM9HtwvzEnajbVhpzxLk7FPNO5XqxXIWU
-----END RSA PRIVATE KEY-----

)KEY";
