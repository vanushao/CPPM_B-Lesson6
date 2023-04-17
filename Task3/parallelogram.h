#pragma once
#include "quadrilateral.h"

//ֿאנאככוכמדנאלל
class Parallelogram : public Quadrilateral {
public:
    Parallelogram();
protected:
    Parallelogram(int angle_AC, int angle_BD, int sides_ac, int sides_bd);
};

