#pragma once
#include <iostream>


class Figure {
public:
    Figure();
    unsigned getSides();

protected:
    Figure(unsigned sides);
    unsigned sides;
};
