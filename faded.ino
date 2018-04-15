int LED=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED,OUTPUT);
}
int rx_byte=0;
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
int rx_byte=Serial.parseInt();
  Serial.println(rx_byte);
  analogWrite(LED,rx_byte);
  delay(50);
}
}
