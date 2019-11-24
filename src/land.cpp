#include "land.h"
#include <cstring>

Land::Land()
{
	command = new char[strlen("land")+1];
	strcpy(command, "land");
}

double Land::get_delay()
{ 
	return 0; 
}