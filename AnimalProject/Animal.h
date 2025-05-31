#pragma once
#include "main.h"
class Animal
{
public:
string name;

Animal(string name) : name(name){}
	
	void getVoice() {
		cout << "..." << endl;
	}

};

