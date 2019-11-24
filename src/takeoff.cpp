#include "takeoff.h"
#include <cstring>

Takeoff::Takeoff()
{
	command = new char[strlen("takeoff")+1];
	strcpy(command, "takeoff");
}

double Takeoff::get_delay()
{
	return 5;
}