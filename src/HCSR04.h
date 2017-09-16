#ifndef _HCSR04_H
#define _HCSR04_H

class HCSR04 
{
  public:
    HCSR04(int triggerPin, int echoPin);
    ~HCSR04();
    float meters();
  private:
    int triggerPin;
    int echoPin;
};
#endif