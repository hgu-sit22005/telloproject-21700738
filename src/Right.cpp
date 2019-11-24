#include "right.h"
#include <cstring>
#include <sstream>

Right::Right()
{ 
   command = new char[strlen("right 20")+1];
   strcpy(command, "right 20");
}

Right::Right(int _value)
{
   std::stringstream sstream;
   sstream << "right " << _value;

   command = new char[strlen(sstream.str().c_str())+1];
   strcpy(command, sstream.str().c_str());
}

double Right::get_delay()
{ 
   return 2; 
}