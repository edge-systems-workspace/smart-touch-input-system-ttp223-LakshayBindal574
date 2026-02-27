#include <Arduino.h>

int touchPin = 5;
int ledPin = 13;
void setup() {
  pinMode(touchPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(touchPin);
  if(state==1){
    digitalWrite(13,1);
    Serial.println("Touch");
  }
  else{
    digitalWrite(13,0);
    Serial.println("UnTouched");
  }
}
