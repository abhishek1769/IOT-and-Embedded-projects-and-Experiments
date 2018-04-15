#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("A");
lcd.setCursor(15,0);
lcd.print("B");
lcd.setCursor(0,1);
lcd.print("C");
lcd.setCursor(15,1);
lcd.print("D");
}

void loop() {
  // put your main code here, to run repeatedly:

}
