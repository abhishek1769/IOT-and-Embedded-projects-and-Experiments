void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(2,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sw1=0;
  sw1=digitalRead(2);
int s1=0;
 s1=sw1;
 up: if(s1==HIGH){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,1);
    Serial.print("IT is moving forward");
    delay(2000);
  }
  up2: if(s1==LOW){
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
    Serial.print("IT is momentoroly stopped");
    delay(2000);
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
    digitalWrite(10,1);
    Serial.print("It is moving right");
    delay(2000);
    if(sw1==s1){
      goto up;
    }else{
     goto up2;
    }
  }

}
