#pragma once
#include "isoscelestriangle.h"

//Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle {
public:
    EquilateralTriangle();
protected:
    EquilateralTriangle(int sides_abc);
};
