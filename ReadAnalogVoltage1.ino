/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

// the setup routine runs once when you press reset:
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,9,5,4,3,1);
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  lcd.begin(16,2);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  float v1 = voltage;
  lcd.setCursor(0,0);
  lcd.print("VOLT=");
  lcd.setCursor(5,0);
  lcd.print(v1);
  lcd.setCursor(8,0);
  lcd.print("V");
  delay(1000);
  if(v1!=voltage){
  lcd.clear();
  }else{
    lcd.setCursor(0,0);
  lcd.print("VOLT=");
  lcd.setCursor(5,0);
  lcd.print(v1);
  lcd.setCursor(8,0);
  lcd.print("V");
  delay(1000);
  }
  if(voltage>=4.3){
    digitalWrite(11,1);
   // delay(1000);
  }else if(voltage<=2.3){
    digitalWrite(10,1);
   // delay(1000);
  }else{
    digitalWrite(11,0);
    digitalWrite(10,0);
    //delay(5000);
  }
}
