void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for(i=13;i>=10;i--)
{
digitalWrite(i,HIGH);
delay(1000);
digitalWrite(i,LOW);
delay(1000);
}
}
