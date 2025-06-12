#include "Shape.h"
#pragma once
class Rectangle
{
private:
	int x, y, width, height;
public:
	Rectangle(double x, double y, double w, double h) 
		: x(x), y(y), width(w), height(h) {}
	void information()  override {
		cout << "Rectangle: top left corner (" << x << ", " << y << "), width "
			<< width << ", height " << height << endl;
	}
	double calculating_per()  override {
		return 2 * (width + height); 
	}
	double calculating_area()  override {
		return width * height; 
	}
	int find_distance()  override {
		return sqrt(x * x + y * y); 
	}
};

