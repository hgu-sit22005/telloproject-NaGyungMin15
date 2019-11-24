#pragma once
#include "TelloPro.h"

class cw: public TelloPro
{
public:
	cw();
	cw(int _val);
	
public:
	double get_delay();
};