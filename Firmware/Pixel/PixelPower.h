#ifndef Pixel_h
#define Pixel_h

//Standard Arduino libraries
#include <Arduino.h>

class Pixel
{
  private:

  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
};

#endif
