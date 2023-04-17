#include "parallelogram.h"

//ֿאנאככוכמדנאלל
Parallelogram::Parallelogram() : Parallelogram(30, 40, 20, 30) {
}
Parallelogram::Parallelogram(int angle_AC, int angle_BD, int sides_ac, int sides_bd)
    : Quadrilateral(angle_AC, angle_BD, angle_AC, angle_BD, sides_ac, sides_bd, sides_ac, sides_bd) {
}
