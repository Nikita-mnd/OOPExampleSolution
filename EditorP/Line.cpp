#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2) : a(x1, y1), b(x2, y2) {}

void  Line::information() {
	cout << "line from (" << a.find_distance()
		<< ") to (" << b.find_distance() << ")" << endl;;
}

double Line::calculating_per() {
	return 0;
}
double  Line::calculating_area() {
	return 0;
}
int  Line::find_distance() {
	return min(a.find_distance(), b.find_distance());
}