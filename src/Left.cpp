#include "left.h"
#include <cstring>
#include <sstream>

Left::Left()
{ 
   command = new char[strlen("left 20")+1];
   strcpy(command, "left 20");
}

Left::Left(int _value)
{
   std::stringstream sstream;
   sstream << "left " << _value;

   command = new char[strlen(sstream.str().c_str())+1];
   strcpy(command, sstream.str().c_str());
}

double Left::get_delay()
{ 
   return 2; 
}