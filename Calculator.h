#pragma once


class Calculator {
public:
	Calculator();
	long double add();
	long double multiply();
	long double subtract_1_2();
	long double subtract_2_1();
	long double divide_1_2();
	long double divide_2_1();
	bool set_num1(long double);
	bool set_num2(long double);

private:
	long double num1;
	long double num2;
};

