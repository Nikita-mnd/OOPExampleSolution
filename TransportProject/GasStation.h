#pragma once
#include "Bus.h"
#include "Truck.h"
#include "Car.h"
class GasStation
{
public:
	int calculateTotalGas(Car* cars, Bus* buses, Truck trucks, int size) {
		int total = 0;

		for (int i = 0; i < size; i++) {

			total += cars[i].volume;

		}

		for (int i = 0; i < size; i++)
		{
			total += buses[i].tank;
		}

		for (int i = 0; i < size; i++)
		{
			total += buses[i].tank;
		}

		return total;
	}
};

