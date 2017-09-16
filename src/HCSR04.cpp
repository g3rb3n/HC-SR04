#include <HCSR04.h>

#include <Arduino.h>

HCSR04::HCSR04(int triggerPin, int echoPin)
{
  this->triggerPin = triggerPin;
  this->echoPin = echoPin;
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

HCSR04::~HCSR04(){};

float HCSR04::meters()
{
  digitalWrite(this->triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(this->triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(this->triggerPin, LOW);
  long duration = pulseIn(this->echoPin, HIGH);
  return duration / 5820.0;
}
