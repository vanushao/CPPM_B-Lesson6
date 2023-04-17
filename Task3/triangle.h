#pragma once
#include "figure.h"
#include <iostream>

//Треугольник
class Triangle : public Figure {
public:
    Triangle();

    int get_A();
    int get_B();
    int get_C();

    int get_a();
    int get_b();
    int get_c();

protected:
    Triangle(int A, int B, int C, int a, int b, int c);
    int A, B, C; //angles
    int a, b, c; //sides lenght
};

std::ostream& operator<<(std::ostream& out, Triangle& t);

