#include "Point2D.h"

Point2D Point2D :: sum(Point2D point) {

	return Point2D (x + point.x, y + point.y);
}
Point2D Point2D::sum(int value) {

	return Point2D(x +x, y + y);
}
Point2D Point2D::sub(Point2D point) {

	return Point2D(x - point.x, y - point.y);

}
Point2D Point2D::minus() {


	return Point2D(-x, -y);
}

Point2D Point2D::operator+(Point2D point);
Point2D  Point2D::operator+(int value);
Point2D  Point2D::operator-(Point2D point);
Point2D  Point2D::operator-(int value);
Point2D  Point2D::operator-();
Point2D  Point2D::operator*(int value);
Point2D  Point2D::operator/();