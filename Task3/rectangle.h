#pragma once
#include "parallelogram.h"

//Прямоугольник
class Rectangle : public Parallelogram {
public:
    Rectangle();
protected:
    Rectangle(int sides_ac, int sides_bd);
};

