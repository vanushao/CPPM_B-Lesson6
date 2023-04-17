#include "equilateraltriangle.h"

//Равносторонний треугольник
EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(30) {
}
EquilateralTriangle::EquilateralTriangle(int sides_abc) : IsoscelesTriangle(60, 60, sides_abc, sides_abc) {
}
