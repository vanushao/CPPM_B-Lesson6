#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "righttriangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"

int main() {
    std::setlocale(LC_ALL, "Russian");

    Triangle triangle;
    RightTriangle righttriangle;
    IsoscelesTriangle isoscelestriangle;
    EquilateralTriangle equilateraltriangle;
    Quadrilateral quadrilateral;
    Rectangle rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhomb rhomb;

    std::cout << "Треугольник:" << std::endl << triangle << std::endl
        << "Прямоугольный треугольник:" << std::endl << righttriangle << std::endl
        << "Равнобедренный треугольник:" << std::endl << isoscelestriangle << std::endl
        << "Равносторонний треугольник:" << std::endl << equilateraltriangle << std::endl
        << "Четырёхугольник:" << std::endl << quadrilateral << std::endl
        << "Прямоугольник:" << std::endl << rectangle << std::endl
        << "Квадрат:" << std::endl << square << std::endl
        << "Параллелограмм:" << std::endl << parallelogram << std::endl
        << "Ромб:" << std::endl << rhomb << std::endl;

}