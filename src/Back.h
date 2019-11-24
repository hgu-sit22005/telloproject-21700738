#pragma once	
#include "TelloPro.h"

class Back: public TelloPro
{
public:
	Back();
	Back(int _val);
public:
	double get_delay();
};