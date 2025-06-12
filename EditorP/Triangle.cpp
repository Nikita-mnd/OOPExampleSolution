#include "Triangle.h"

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {
}
void Triangle::information()  override {
    cout << "Треугольник: вершины (" << x1 << ", " << y1 << "), ("
        << x2 << ", " << y2 << "), ("
        << x3 << ", " << y3 << ")\n";
}
double Triangle::calculating_per()  override {
    double ab = sqrt((x1 - x2) * (x1 - x2) + (y1 - y3) * (y1 - y3));
    double bc = sqrt((x2 - x3) * (x2 - x3) + (y2 - y2) * (y2 - y2));
    double ca = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    return ab + bc + ca;
}

double Triangle::calculating_area()  override {
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
}

double Triangle::find_distance()  override {
    return min({ sqrt(x1 * x1 + y1 * y1),
        sqrt(x2 * x2 + y2 * y2), sqrt(x3 * x3 + y3 * y3) });
}