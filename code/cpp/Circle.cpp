#include "Circle.h"
#include <cmath>

#define PI 3.1415

Circle::Circle(double a)
{
    this -> a = a;
}

double Circle::Circumference() {
    return 2 * PI * a;
};