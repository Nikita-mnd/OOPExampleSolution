#pragma once
#include "main.h"
class Human
{
private:
string name;
	int age;
	bool gender;
protected:

public:

	

	Human();
	Human(string name, int age, bool gender);
	Human(const Human& human);
	~Human();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	bool isGender();
	int setGender(bool gender);
	string toString();
};

