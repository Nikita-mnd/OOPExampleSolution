#include "Transpot.h"
#pragma once
class Bus : public Transpot
{
public:

	int count;

	Bus(int tank) : Transpot(tank){}

};

