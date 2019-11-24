#pragma once

#include "TelloPro.h"
#include <cstring>

class Takeoff: public TelloPro
{
public:
	Takeoff();

public:
	double get_delay();
};