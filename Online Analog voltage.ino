#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
char auth[]="1e9e0055f9f24908b184572d5c104f84";
char ssid[]="freewifi";
char pass[]="freepassword";
int sensorValue=0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  Blynk.run();
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  float v1 = voltage;
  Serial.println(v1);
  Blynk.virtualWrite(V1,v1);
  delay(200);
}
