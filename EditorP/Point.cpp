#include "Point.h"

void Point::information() {
	cout << "x: " << x << ", y: " << y << endl;
}

double Point::calculating_per() {
	return 0;
}
double Point::calculating_area() {
	return 0;
}
int Point::find_distance() {
	return sqrt((x * x) + (y * y));
}