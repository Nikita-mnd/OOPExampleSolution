#pragma once
#include "Shape.h"

class Line : public Shape
{
private:
	int x1, x2, y1, y2;
public:
	Line(int x1, int y1, int x2, int y2) : Shape(x, y) {}

	string information() override;

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
			swap(x1, x2);
		}
		if (y1 < y2) {
			swap(y1, y2);
		}
		int dis = sqrt((x1 * x1) + (y1 * y1));
		return dis;
	}

};

