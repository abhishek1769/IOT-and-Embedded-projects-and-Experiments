#include<LiquidCrystal.h>
LiquidCrystal lcd(9,8,4,3,2,1);
int sw1=0;
int sw2=0;
int sw3=0;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
sw1=digitalRead(7);
sw2=digitalRead(6);
sw3=digitalRead(5);
if(sw1==HIGH && sw2==HIGH && sw3==LOW){
  for(i=13;i>=10;i--){
    if(i%2==0){
      digitalWrite(12,1);
      digitalWrite(10,1);
      delay(500);
      digitalWrite(12,0);
      digitalWrite(10,0);
      delay(500);
    }else{
      digitalWrite(13,1);
      digitalWrite(11,1);
      delay(500);
      digitalWrite(13,0);
      digitalWrite(11,0);
      delay(500);
    }
  }
}
else if(sw1==LOW && sw2==HIGH && sw3==HIGH){
  for(i=13;i>=10;i--){
    digitalWrite(i,1);
    delay(500);
    digitalWrite(i,0);
    delay(500);
  }
}
else if(sw1==HIGH && sw2==LOW && sw3==HIGH){
  digitalWrite(13,1);
   digitalWrite(12,1);
    digitalWrite(11,1);
     digitalWrite(10,1);
  delay(500);
  digitalWrite(13,0);
   digitalWrite(12,0);
    digitalWrite(11,0);
     digitalWrite(10,0);
  delay(500);
}
else if(sw1==HIGH && sw2==HIGH && sw3==HIGH){
  lcd.setCursor(0,0);
  lcd.print("ALL_LIGHTS_ONN");
  delay(5000);
}
else if(sw1==LOW && sw2==LOW && sw3==LOW){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("NO_LIGHTS");
  delay(5000);
}
else{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("USE_TWO");
  lcd.setCursor(0,1);
  lcd.print("COMBINATIONS");
  delay(5000);
}
}
