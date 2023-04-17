#include "solution.h"
#include <iostream>

void addition(int& a, int& b) {
	std::cout << a << " ���� " << b << " = " << (a + b) << std::endl;
}

void subtraction(int& a, int& b) {
	std::cout << a << " ����� " << b << " = " << (a - b) << std::endl;
}

void multiplication(int& a, int& b) {
	std::cout << a << " �������� �� " << b << " = " << (a * b) << std::endl;
}

void division(int& a, int& b) {
	if (b == 0) {
		std::cout << "�� ���� ������ ������" << std::endl;
	}
	else {
		std::cout << a << " ������ �� " << b << " = " << static_cast<double>(a / b) << std::endl;
	}
}

void exponentiation(int& a, int& b) {
	int res = 1;

	for (int i = 0; i < b; ++i) {
		res *= a;
	}

	std::cout << a << " � ������� " << b << " = " << res << std::endl;
}
