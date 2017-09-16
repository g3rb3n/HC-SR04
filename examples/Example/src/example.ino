#define echoPin D7 // Echo Pin
#define triggerPin D8 // Trigger Pin

#include <HCSR04.h>

HCSR04 sensor(triggerPin, echoPin);

void setup() {
  Serial.begin(230400);
}

void loop() {
  Serial.print("Read ");
  Serial.print(sensor.meters(),3);
  Serial.println();
}
