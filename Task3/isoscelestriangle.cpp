#include "isoscelestriangle.h"

//Равнобедренный треугольник
IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle(50, 60, 10, 20) {
}
IsoscelesTriangle::IsoscelesTriangle(int angle_AC, int angle_B, int side_ac, int side_b) : Triangle(angle_AC, angle_B, angle_AC, side_ac, side_b, side_ac) {
}
