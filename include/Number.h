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
  Number& operator+-(const Number&) = 0;
  Number& operator+*(const Number&) = 0;
  Number& operator+/(const Number&) = 0;

  bool checked_add(const Number&) = 0;
  bool checked_sub(const Number&) = 0;
  bool checked_mul(const Number&) = 0;
  bool checked_div(const Number&) = 0;
};

#endif

// end Number.h
