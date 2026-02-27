#include <Arduino.h>

int touchPin = 5;
int ledPin = 13;
void setup() {
  pinMode(touchPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
