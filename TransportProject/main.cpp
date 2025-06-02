#include <iostream>
#include "GasStation.h"
#include "Bus.h"
#include "Car.h"
#include "Truck.h"

int main() {
	
	const int size = 3;

	Transpot* tr1 = new Car(50);
	Transpot* tr2 = new Truck(500);
	Transpot* tr3 = new Bus(450);

	Transpot* transport[size]{ tr1, tr2, tr3 };

	Car cars[size]{ Car(40), Car(50), Car(45) };
	Bus cars[size]{ Bus(255), Bus(250), Bus(300) };
	Truck cars[size]{ Truck(300), Truck(400), Truck(500) };

	GasStation station;

	int total = station.calculateTotalGas(transport, size);
	std::cout << total << std::endl;
	return 0;
}