#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include <cmath>

#define PI 3.1415

int main()
{
    std::cout << 2*PI << std::endl;
    Figure* figure = new Rectangle(2, 3);
    Figure* figure1 = new Circle(5);

    std::cout << figure -> GetPerimetr() << std::endl;
    std::cout << figure -> GetSquare() << std::endl;
    std::cout << figure1 -> Circumference() << std::endl;

}