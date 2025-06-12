#include "Circle.h"

Circle::Circle(double x, double y, double r) : x(x), y(y), r(r) {}
void Circle::information()   {
    cout << "Circle: center (" << x << ", " << y << "), radius " << r << "\n";
}
double Circle::calculating_per()  {
    return 2 * 3 * r;
}
double Circle::calculating_area()  {
    return 3 * r * r;
}
int Circle::find_distance()  {
    return sqrt(x * x + y * y) - r;
}