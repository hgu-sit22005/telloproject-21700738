#pragma once	
#include "TelloPro.h"

class Ccw: public TelloPro
{
public:
	Ccw();
	Ccw(int _val);
public:
	double get_delay();
};