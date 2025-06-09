#include "AnimalStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

int main() {
	cout << Animal::count << endl;
	Animal a1, a2, a3;
	{

		Animal a4;
		cout<< Animal::getCount() << endl;
		cout << a4.getCount() << endl;
	}
	/*Animal** animals;
	int size = 5;


	animals = new Animal * [size] {new Dog("Sharly"), new Cat("Adel"),
		new Crocodile("Aligator")};


	cout << animals[0]->count<< endl;*/

		return 0;
}