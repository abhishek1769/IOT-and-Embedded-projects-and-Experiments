void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11,OUTPUT);
}

char rx_byte=0;
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  rx_byte=Serial.read();
  if(rx_byte=='1'){
    Serial.print("LED is ONN");
    digitalWrite(11,1);
  }else{
    Serial.print("LED is OFF");
    digitalWrite(11,0);
  }
}
}
