#include "Calculator.h"


Calculator::Calculator() : num1{ 1 }, num2{ 1 } {}

long double Calculator::add() { return num1 + num2; }

long double Calculator::multiply() { return num1 * num2; }

long double Calculator::subtract_1_2() { return num1 - num2; }

long double Calculator::subtract_2_1() { return num2 - num1; }

long double Calculator::divide_1_2() { return num1 / num2; }

long double Calculator::divide_2_1() { return num2 / num1; }

bool Calculator::set_num1(long double num1) {
	if (num1) {
		this->num1 = num1;
		return true;
	}
	else { return false; }
}

bool Calculator::set_num2(long double num2) {
	if (num2) {
		this->num2 = num2;
		return true;
	}
	else { return false; }
}
