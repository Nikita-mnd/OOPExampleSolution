#include <iostream>
#include "GasStation.h"

int main() {

	const int size = 3;
	Car cars[size]{ Car(40), Car(50), Car(45) };
	Bus cars[size]{ Bus(255), Bus(250), Bus(300) };
	Truck cars[size]{ Truck(300), Truck(400), Truck(500) };

	GasStation station;

	int total = station.calculateTotalGas(cars, buses, trucks, size);

	return 0;
}