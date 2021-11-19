#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(double a, double b)
{
    this -> a = a;
    this -> b = b;
}

double Rectangle::GetPerimetr() {
	return 0.5 * (this->a + this->b);
};

double Rectangle::GetSquare() {
    return 2 * sqrt(pow(a/2, 2) + pow(b, 2)) + a;
};