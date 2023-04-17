#include <iostream>
#include "solution.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b, choice;
    std::cout << "Введите первое число : ";
    std::cin >> a;
    std::cout << "Введите второе число : ";
    std::cin >> b;
    do {
        std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
        std::cin >> choice;
    } while (choice < 1 || choice > 5);
    switch (choice)
    {
    case 1:
        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;
    case 3:
        multiplication(a, b);
        break;
    case 4:
        division(a, b);
        break;
    default:
        exponentiation(a, b);
        break;
    }
    return 0;
}