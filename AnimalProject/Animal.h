#pragma once
#include "main.h"

// abstract class
class Animal
{
public:
	static int count;
	string name;
	Animal() {
		count++;
	}
	Animal(string name) : name(name) {
		count++;
	}
	~Animal() {
		count--;
	}

	int getCount();

	//// overriding
	//virtual void getVoice() {
	//	//...
	//}
};