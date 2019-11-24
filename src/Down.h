#pragma once	
#include "TelloPro.h"

class Down: public TelloPro
{
public:
	Down();
	Down(int _val);
public:
	double get_delay();
};