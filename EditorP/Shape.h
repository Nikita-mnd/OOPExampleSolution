#pragma once
#include "main.h"
class Shape
{
public:
	int x;
	int y;

	Shape(int x, int y) : x(0), y(0){}

	virtual string information() = 0;

	virtual double calculating_per() = 0;

	virtual double calculating_area() = 0;

	virtual int find_distance() = 0;
};

