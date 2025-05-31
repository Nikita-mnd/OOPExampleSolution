#include "main.h"
#include "AnimalStudio.h"
#include "Cat.h"
#include "Dog.h"

int main() {

	AnimalStudio studio;
	Animal animal("Animal");
	Dog dog("Pushok");
	Cat cat("sharly");
	studio.justDoIt(animal);

	return 0;
}