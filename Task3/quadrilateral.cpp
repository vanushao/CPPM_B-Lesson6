#include "quadrilateral.h"

//Четырёхугольник
Quadrilateral::Quadrilateral() : Quadrilateral(50, 60, 70, 80, 10, 20, 30, 40) {
}

Quadrilateral::Quadrilateral(int A, int B, int C, int D, int a, int b, int c, int d) : Figure(4) {
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

int Quadrilateral::get_A() {
    return A;
}
int Quadrilateral::get_B() {
    return B;
}
int Quadrilateral::get_C() {
    return C;
}
int Quadrilateral::get_D() {
    return D;
}

int Quadrilateral::get_a() {
    return a;
}
int Quadrilateral::get_b() {
    return b;
}
int Quadrilateral::get_c() {
    return c;
}
int Quadrilateral::get_d() {
    return d;
}

std::ostream& operator<<(std::ostream& out, Quadrilateral& q) {
    out << "Стороны: a=" << q.get_a() << " b=" << q.get_b() << " c=" << q.get_c() << " d=" << q.get_d() << '\n'
        << "Углы: A=" << q.get_A() << " B=" << q.get_B() << " C=" << q.get_C() << " D=" << q.get_D() << '\n';
    return out;
}
