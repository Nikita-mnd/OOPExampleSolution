#include "Shape.h"
#pragma once
class Point : public Shape
{
private:
	int x, y;
public:
	Point(int x, int y) : Shape(x, y) {}

	void information() override {
		cout << "x: " << x << ", y: " << y << endl;
	}

	double calculating_per() override {
		return 0; 
	}
	double calculating_area() override {
		return 0; 
	}
	int find_distance() override {
		return sqrt((x * x) + (y * y)); 
	}
};

