bool PixelPower::isCharging()
{
  //the status pin outputs 0V whenever the battery is charging
  
  !digitalRead(pin_); //either returns high or low
  //the exclamation point inverts the response  
}

//scope resolution operator


uint16_t PixelPower::getBatteryVoltage(){
  //return the battery voltage in mV, instead of V
  //u means unsigned, int means integer, 16 means 16 bits
  
}
