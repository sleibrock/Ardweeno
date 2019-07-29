/**
 * types.h - Type declaration header
 *
 * @author Steven Leibrock <steven.leibrock@gmail.com>
 */

#ifndef _WEENO_PINTYPE_H
#define _WEENO_PINTYPE_H

enum PinType {
    Analog,
    Digital,
};

enum PinMode {
    Input,
    Output,
    InputPullup,
};

#endif
