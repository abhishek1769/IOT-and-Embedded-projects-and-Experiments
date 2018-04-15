int switch1=0;
int switch2=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  switch1=digitalRead(2);
  switch2=digitalRead(3);
  if(switch1==HIGH && switch2==LOW){
     digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,1);
    delay(1000);
     digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
    delay(1000);
  }
  if(switch1==LOW && switch2==HIGH){
for(i=13;i>=10;i--)
    {
      digitalWrite(i,1);
      delay(1000);
      digitalWrite(i,0);
      delay(1000);
    }
  }else{
     digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
  }

}
