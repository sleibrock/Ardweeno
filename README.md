Weeno - An Arduino Library
====================================

Weeno is an advanced C++ library for writing Arduino code. Much of it is code aimed at creating functional, reusable components in program creation. Comes jam-packed with goodies not included in the Arduino standard library.

* Abstract classes
* Basic pin-connected objects
* Macros / Constants
* Enumerations
* Safe arithmetic / numerics
* Timer logic



## Arduino Code Notes

* Avoid division, it's horrible
* Avoid floating points, also horrible
* Arduino code depends on controlling certain pins automatically. If you overwrite a pin's in/out bits, then you may lose certain Arduino functionality.
* Object allocation is all heap-based so avoid invocations of `new` or `delete`. Objects should be declared at compile-time for more predictable performance.
