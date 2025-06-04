#include "Shape.h"
#pragma once
class Point : public Shape
{

public:
	Point(int x, int y) : Shape(x, y) {}

	string information() override {

		string inf = "Point, x = " + to_string(x) + ", y = " + to_string(y);
		return inf;
	}

	double calculating_per() override {
		return 1;
	}

	double calculating_area() override {
		return 1;
	}

	int find_distance() override {
		int dis = sqrt((x * x) + (y * y));
		return dis;
	}
};

