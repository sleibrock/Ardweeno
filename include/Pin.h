/**
 * Pin.h - Pin header file
 *
 * @author Steven Leibrock <steven.leibrock@gmail.com>
 */

#ifndef _WEENO_PIN_H
#define _WEENO_PIN_H

#include "Toggleable.h"
#include "Switch.h"

class Pin: public Switch, public Toggleable
{
 public:
  Pin();

  byte data;
  
  void on();
  void off();
  void toggle();
};

#endif

// end Pin.h
