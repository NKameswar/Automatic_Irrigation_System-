#include<SoftwareSerial.h>
int ss=2;
int relay=3;
int state=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ss,INPUT);
  pinMode(relay,OUTPUT);
}
void loop() {
  // put your main code here, to run repeat
  state=digitalRead(ss);
  if(state==HIGH)
  {
    digitalWrite(relay,HIGH);
  }

  else
  {
    digitalWrite(relay,LOW);
  }
}
