void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
delay(1000);
digitalWrite(12,1);
digitalWrite(10,1);
digitalWrite(13,LOW);
digitalWrite(11,LOW);
delay(1000);






}
