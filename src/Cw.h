#pragma once	
#include "TelloPro.h"

class Cw: public TelloPro
{
public:
	Cw();
	Cw(int _val);
public:
	double get_delay();
};