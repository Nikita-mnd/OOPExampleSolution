#pragma once
#include "Transpot.h"

class GasStation
{
public:
	int calculateTotalGas(Transpot** trancport ,int size) {
		int total = 0;

		for (int i = 0; i < size; i++) {

			total += trancport[i] ->tank;

		}

		return total;
	}
};

