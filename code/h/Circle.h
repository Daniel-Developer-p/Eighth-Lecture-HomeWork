#pragma once
#include "Figure.h"

class Circle :
        public Figure
{
private:
    double a;
public:
    Circle(double a);

    virtual double Circumference();
};