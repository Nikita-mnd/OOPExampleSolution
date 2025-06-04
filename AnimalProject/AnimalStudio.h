
#pragma once
#include "Animal.h"

class AnimalStudio
{
public:
	void makeItSound(Animal** animals, int size) {
		for (int i = 0; i < size; i++)
		{
			animals[i]->getVoice();
		}
	}
};
