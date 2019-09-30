#include <iostream>
#include <sstream>
#include <cinttypes>
#include "money.h"

int main() {
	Money a;
	uint32_t x;

	std::cout << "Введите количество фунтов, шиллингов и пенсов:" << std::endl;
	a.get();
	a.allSumSet();
	std::cout << "1. Вывести количетсво фунтов, шиллингов и пенсов\n2. Сложить 2 суммы\n3. Вычесть из большей суммы меньшую\n4. Разделить первую сумму на вторую\n5. Разделить первую сумму на дробное число\n6. Умножить первую сумму на дробное число\n7. Операции сравнения\n8. Показать фунты, шиллинги и пенсы\n" << std::endl;
	std::cin >> x;
	if (x == 1) {
		a.show();
	}
	if (x == 2) {
		Money a2;
		std::cout << "Введите вторую сумму." << std::endl;
		std::cout << "Введите количество фунтов, шиллингов и пенсов:" << std::endl;
		a2.get();
		a2.allSumSet();
		a2.Plus(a.allSumGet());
		a2.splitUp();
		a2.show();
	}
	if (x == 3) {
		Money a2;
		std::cout << "Введите вторую сумму." << std::endl;
		std::cout << "Введите количество фунтов, шиллингов и пенсов:" << std::endl;
		a2.get();
		a2.allSumSet();
		if (a2.allSumGet() > a.allSumGet())
			{ 
			a2.Minus(a.allSumGet());
			a2.splitUp();
			a2.show();
		}
		else { 
			a.Minus(a2.allSumGet());
			a.splitUp();
			a.show();
		}
	}
	if (x == 4) {
		Money a2;
		std::cout << "Введите вторую сумму." << std::endl;
		std::cout << "Введите количество фунтов, шиллингов и пенсов:" << std::endl;
		a2.get();
		a2.allSumSet();
		a.Div(a2.allSumGet());
	}
	if (x == 5) {
		std::cout << "Введите число:" << std::endl;
		float arg;
		std::cin >> arg;
		a.DivN(arg);
		a.show();
	}
	if (x == 6) {
		std::cout << "Введите число:" << std::endl;
		float arg;
		std::cin >> arg;
		a.Mult(arg);
		a.show();
	}
	if (x == 7) {
		Money a2;
		std::cout << "Введите вторую сумму." << std::endl;
		std::cout << "Введите количество фунтов, шиллингов и пенсов:" << std::endl;
		a2.get();
		a2.allSumSet();
		if (a2.allSumGet() == a.allSumGet())
		{
			std::cout << "Суммы равны" << std::endl;
		}
		if (a2.allSumGet() > a.allSumGet())
		{
			std::cout << "Первая сумма меньше второй." << std::endl;
		}
		if (a2.allSumGet() < a.allSumGet())
		{
			std::cout << "Первая сумма больше второй." << std::endl;
		}

		}
	if (x == 8) {
		a.Print();
	}
	

	std::cout << " \n Нажмите Ввод для завершения программы \n";
	std::cin.ignore();
	std::cin.get();

	return 0;
}
