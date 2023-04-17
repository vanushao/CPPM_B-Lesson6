#include "figure.h"

//Фигура
Figure::Figure():Figure(1) {
}

Figure::Figure(unsigned sides) : sides(sides) {

}

unsigned Figure::getSides() {
    return sides;
}
