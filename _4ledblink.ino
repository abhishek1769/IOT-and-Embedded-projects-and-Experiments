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
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
delay(2000);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
delay(2000);
}
