## Synopsis
A simple library for the HC-SR04


## Example
```
#define echoPin D7 // Echo Pin
#define triggerPin D8 // Trigger Pin

#include <HCSR04.h>

HCSR04 sensor(triggerPin, echoPin);
float meters = sensor.meters();
```
