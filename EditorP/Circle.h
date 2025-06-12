#pragma once
#include "Shape.h"
class Circle
{
private:
    int x, y, r;
public:
    Circle(double x, double y, double r) : x(x), y(y), r(r) {}
    void information()  override {
        cout << "Circle: center (" << x << ", " << y << "), radius " << r << "\n";
    }
    double calculating_per() override {
        return 2 *3 * r; 
    }
    double calculating_area() override { 
        return 3 * r * r; 
    }
    int find_distance() override{ 
        return sqrt(x * x + y * y) - r; 
    }
};

