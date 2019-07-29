#include "include/Pin.h"


Pin::Pin()
{
  data = 0;
}


void Pin::on()
{
  data = 0xff;
}

void Pin::off()
{
  data = 0x00;
}

void Pin::toggle()
{
}




// end Pin.cpp
