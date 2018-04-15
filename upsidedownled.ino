void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int j;
  for(j=13;j>=10;j--)
  {
    digitalWrite(j,1);
    delay(500);
    digitalWrite(j,0);
    delay(500);
  }
  for(j=10;j<=13;j++)
  {
    digitalWrite(j,1);
    delay(500);
    digitalWrite(j,0);
    delay(500);
  }
}
