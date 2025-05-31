#pragma once
#include"Animal.h"
#include"Cat.h"
#include"Dog.h"
class AnimalStudio
{
public:
	void justDoIt(Animal** animal, int size) {
		for (int i = 0; i < size; i++)
		{
			animal[i]->getVoice();
		}

	}
};

