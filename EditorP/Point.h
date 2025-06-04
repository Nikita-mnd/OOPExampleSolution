#include "Shape.h"
#pragma once
class Point : public Shape
{

public:
	Point(int x, int y) : Shape(x, y) {}

	string information() override;

	 double calculating_per() override;

	 double calculating_area() override;

	 int find_distance() override;
};

