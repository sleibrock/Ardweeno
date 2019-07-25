/**
 * Switch.h - Switch header file
 *
 * @author Steven Leibrock <steven.leibrock@gmail.com>
 */

#ifndef _WEENO_SWITCH_H
#define _WEENO_SWITCH_H

class Switch {
 public:
  virtual void on() = 0;
  virtual void off() = 0;
};

#endif

// end Switch.h
