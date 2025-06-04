
#include "AnimalStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

// äčíŕěč÷ĺńęčé ďîëčěîđôčçě (dynamic polymorphism)
// ďîçäíĺĺ ńâ˙çűâŕíčĺ (dynamic binding)
// ďĺđĺîďđĺäĺëĺíčĺ (overriding)

int main() {
	AnimalStudio studio;

	Dog* dog = new Dog("Laika");
	Cat* cat = new Cat("Adel");
	Crocodile* crocodile = new Crocodile("Pushok");

	int size = 5;
	Animal** animals = new Animal * [size] {dog, cat, crocodile, dog, cat};

	studio.makeItSound(animals, size);

	return 0;
}
