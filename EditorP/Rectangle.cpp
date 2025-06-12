#include "Rectangle.h"
Rectangle::Rectangle(double x, double y, double w, double h)
	: x(x), y(y), width(w), height(h) {}
void Rectang::information()  override {
	cout << "Rectangle: top left corner (" << x << ", " << y << "), width "
		<< width << ", height " << height << endl;
}
double Rectangle::calculating_per()  override {
	return 2 * (width + height);
}
double Rectangle::calculating_area()  override {
	return width * height;
}
int Rectangle::find_distance()  override {
	return sqrt(x * x + y * y);
}