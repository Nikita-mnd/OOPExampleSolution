#include "Transpot.h"
#pragma once
class Truck : public Transpot
{
public:

	int volume;
	double weight;
	

	Truck(int tank) : Transpot(tank) {}

};

