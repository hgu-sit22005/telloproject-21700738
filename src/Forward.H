#pragma once	
#include "TelloPro.h"

class Forward: public TelloPro
{
public:
	Forward();
	Forward(int _val);
public:
	double get_delay();
};