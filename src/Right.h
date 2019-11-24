#pragma once	
#include "TelloPro.h"

class Right: public TelloPro
{
public:
	Right();
	Right(int _val);
public:
	double get_delay();
};