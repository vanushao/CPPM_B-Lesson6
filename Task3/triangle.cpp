#include "triangle.h"

//Треугольник
Triangle::Triangle() : Triangle(50, 60, 70, 10, 20, 30) {
}

Triangle::Triangle(int A, int B, int C, int a, int b, int c) : Figure(3) {
    this->A = A;
    this->B = B;
    this->C = C;
    this->a = a;
    this->b = b;
    this->c = c;
}

int Triangle::get_A() {
    return A;
}
int Triangle::get_B() {
    return B;
}
int Triangle::get_C() {
    return C;
}

int Triangle::get_a() {
    return a;
}
int Triangle::get_b() {
    return b;
}
int Triangle::get_c() {
    return c;
}

std::ostream& operator<<(std::ostream& out, Triangle& t) {
    out << "Стороны: a=" << t.get_a() << " b=" << t.get_b() << " c=" << t.get_c() << '\n'
        << "Углы: A=" << t.get_A() << " B=" << t.get_B() << " C=" << t.get_C() << '\n';
    return out;
}