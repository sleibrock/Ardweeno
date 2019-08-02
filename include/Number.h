/**
 * Number.h - Number header file
 *
 * @author Steven Leibrock <steven.leibrock@gmail.com>
 */

#ifndef _WEENO_NUMBER_H
#define _WEENO_NUMBER_H

class Number
{
public:
  void Number() = 0;
    
  Number& operator+(Number, const Number&) = 0;
  Number& operator-(Number, const Number&) = 0;
  Number& operator*(Number, const Number&) = 0;
  Number& operator/(Number, const Number&) = 0;

  Number& operator+=(const Number&) = 0;
  Number& operator-=(const Number&) = 0;
  Number& operator*=(const Number&) = 0;
  Number& operator/=(const Number&) = 0;

  // check for over/underflow instances
  bool checked_add(const Number&) = 0;
  bool checked_sub(const Number&) = 0;
  bool checked_mul(const Number&) = 0;
  bool checked_div(const Number&) = 0;

  // convert to raw types
  byte to_byte() = 0;
  i32  to_int() = 0;
  i16  to_i16() = 0;
  u32  to_u32() = 0;
  u16  to_u16() = 0;
  
};

#endif

// end Number.h
