#include "Calculator.h"

#include <iostream>


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tКалькулятор двух чисел.\n" << std::endl;

	Calculator calc;
	long double num1{ 1 };
	long double num2{ 1 };

	while (true) {
		while (true) {
			std::cout << "Введите num1: ";
			std::cin >> num1;
			if (calc.set_num1(num1)) {
				break;
			}
			else {
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		while (true) {
			std::cout << "Введите num2: ";
			std::cin >> num2;
			if (calc.set_num2(num2)) {
				break;
			}
			else {
				std::cout << "Неверный ввод!" << std::endl;
			}
		}
		
		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl << std::endl;
	}

	system("pause > nul");
	return 0;
}