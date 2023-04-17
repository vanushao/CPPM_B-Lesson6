#pragma once
#include "figure.h"
#include <iostream>

//Четырёхугольник
class Quadrilateral : public Figure {
public:
    Quadrilateral();

    int get_A();
    int get_B();
    int get_C();
    int get_D();

    int get_a();
    int get_b();
    int get_c();
    int get_d();

protected:
    Quadrilateral(int A, int B, int C, int D, int a, int b, int c, int d);
    int A, B, C, D; //angles
    int a, b, c, d; //sides lenght
};
std::ostream& operator<<(std::ostream& out, Quadrilateral& q);

