#pragma once
#include "main.h"
#include "Dog.h"
#include "Cat.h"
class Animal
{
public:
	string name;

	Animal(string name) : name(name) {}

	virtual void getVoice() {
		cout << "..." << endl;
	}

};

