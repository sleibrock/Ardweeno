/**
 * types.h - Type declaration header
 *
 * @author Steven Leibrock <steven.leibrock@gmail.com>
 */

#ifndef _WEENO_TYPES_H
#define _WEENO_TYPES_H


/**
 * Typedef declarations
 * Basically Rust notations for certain numbers
 */


typedef u32 unsigned int;
typedef u16 unsigned short int;
typedef i32 int;
typedef i16 short int;


/**
 * Re-usable Enumerations
 *
 */

enum PinType {
    Analog,
    Digital,
};

enum PinMode {
    Input,
    Output,
    InputPullup,
};

enum PinStatus {
   On,
   Off,
};


enum ClockType {
    Increment,
    Decrement,
};

#endif
