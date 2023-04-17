#include "rectangle.h"

//Прямоугольник
Rectangle::Rectangle() : Rectangle(10, 20) {

}
Rectangle::Rectangle(int sides_ac, int sides_bd) : Parallelogram(90, 90, sides_ac, sides_bd) {

}
