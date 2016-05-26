
#ifndef LilliputIR_h
#define LilliputIR_h

#include "Arduino.h"

class LilliputIR
{

public:
	// Initialize
  LilliputIR(uint8_t pin); 
  
  void power();
  void mute();
  void left();
  void right();
  void up();
  void down();
  void menu();
  void input();
  
protected:
  uint8_t thePin;
};

#endif


