#pragma once
#include "Transpot.h"
class Car : public Transpot
{
public:
	
	int speed;
	double price;

	Car(int tank) : Transpot(tank) {};
};

