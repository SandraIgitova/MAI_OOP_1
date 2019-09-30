#ifndef MONEY_H
#define MONEY_H

#include <cinttypes>
#include <iostream>
#include "money.h"

class Money {
public:
	Money();
	// разделение всей суммы на фунты, шиллинги и пенсы с записью их в разные переменные
	void splitUp();

	void Mix();

	// Получить сумму
	void get();
	// Вывести сумму
	void show();
	// сложение сумм
	void Plus(uint64_t a2);
	// вычитание сумм
	void Minus(uint64_t a2);
	// деление 2х сумм
	void Div(uint64_t a2);
	// делене суммы на число
	void DivN(float arg);
	// умножение суммы на число
	void Mult(float arg);
	// Оператор меньше
	bool opM(Money a2);
	// Оператор больше
	bool opB(Money a2);
	// Оператор меньше равно
	bool opMR(Money a2);
	// Оператор больше равно
	bool opBR(Money a2);
	// Оператор равно
	bool opRR(Money a2);
	// Оператор не равно
	bool opNR(Money a2);
	//выводит фунты, шиллинги и пенсы. 
	void Print();

//	uint64_t allSum();
	//геттер для allSum
	uint64_t allSumGet();
	//сеттер для allSum
	void allSumSet();
private:
	uint64_t funt; // количество фунтов funt
	uint16_t shil; // количество шиллингов shil
	uint8_t pen; // количество пенсов
	uint64_t allSum; // вся сумма
};

#endif
