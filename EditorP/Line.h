#pragma once
#include "Shape.h"
#include "Point.h"

class Line : public Shape
{
private:
	Point a, b;
public:
	Line(int x1, int y1, int x2, int y2) : a(x1, y1), b(x2, y2) {}

	void information() override {
		cout << "line from (" << a.find_distance()
			<< ") to (" << b.find_distance() << ")" << endl;;
	}

	double calculating_per()  override {
		return 0; 
	}
	double calculating_area()  override {
		return 0; 
	}
	int find_distance()  override{
		return min(a.find_distance(), b.find_distance()); 
	}

};

