#pragma once
#include "triangle.h"

//�������������� �����������
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle();
protected:
    IsoscelesTriangle(int angle_AC, int angle_B, int side_ac, int side_b);
};

