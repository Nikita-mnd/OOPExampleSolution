#pragma once
#include "Shape.h"

class Line : public Shape
{
private:
	int x1, x2, y1, y2;
public:
	Line(int x1, int y1, int x2, int y2) : Shape(x, y) {}

	string information() override {

		string inf = "Line, x1 = " + to_string(x1) + ", x2 = " + to_string(x2) +
			", y1 = " + to_string(y1) + ", y2 = " + to_string(y2);
		return inf;
	}

	double calculating_per() override {
		if (x1 != x2 || y1 != x2) {
			x = x1 > x2 ? x1 - x2 : x2 - x1;
			y = y1 > y2 ? y1 - y2 : y2 - y1;
			return sqrt((x * x) + (y * y));
		}
		if (x1 == x2) {
			return y1 > y2 ? y1 - y2 : y2 - y1;
		}
		return x1 > x2 ? x1 - x2 : x2 - x1;
	}

	double calculating_area() override {
		if (x1 != x2 || y1 != x2) {
			x = x1 > x2 ? x1 - x2 : x2 - x1;
			y = y1 > y2 ? y1 - y2 : y2 - y1;
			return sqrt((x * x) + (y * y));
		}
		if (x1 == x2) {
			return y1 > y2 ? y1 - y2 : y2 - y1;
		}
		return x1 > x2 ? x1 - x2 : x2 - x1;
	}

	int find_distance() override {
		if (x1 < x2) {
			swap
		}
		int dis = sqrt((x * x) + (y * y));
		return dis;
	}

};

