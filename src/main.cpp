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
/**
 * @file Touch_Sensor_LED_Control.ino
 * @brief Touch sensor based LED control system
 * @details
 * This program reads input from a touch sensor module.
 * When the sensor detects touch (HIGH signal), the LED turns ON.
 * When not touched (LOW signal), the LED turns OFF.
 *
 * The sensor state is also printed on the Serial Monitor.
 *
 * @author Lakshay Bindal
 * @version 1.0
 * @date 27-02-2026
 *
 * @section hardware_sec Hardware Connections
 * - Touch Sensor OUT → Digital Pin 5
 * - LED Anode → Digital Pin 13
 * - LED Cathode → GND (with 220Ω resistor)
 *
 * @section working_sec Working Principle
 * - If touch sensor output is HIGH → LED ON
 * - If touch sensor output is LOW  → LED OFF
 *
 * @note Ensure proper grounding of touch sensor module.
 */

#include <Arduino.h>

/** @brief Digital pin connected to Touch Sensor output */
int touchPin = 5;

/** @brief Digital pin connected to LED */
int ledPin = 13;


/**
 * @brief Initializes pins and Serial communication
 */
void setup()
{
    pinMode(touchPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}


/**
 * @brief Main program loop
 * @details
 * Continuously reads touch sensor state
 * and controls LED accordingly.
 */
void loop()
{
    int state = digitalRead(touchPin);

    if (state == HIGH)
    {
        digitalWrite(ledPin, HIGH);
        Serial.println("Touched");
    }
    else
    {
        digitalWrite(ledPin, LOW);
        Serial.println("Untouched");
    }
}
