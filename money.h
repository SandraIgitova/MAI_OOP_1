#ifndef MONEY_H
#define MONEY_H

#include <cinttypes>
#include <iostream>
#include "money.h"

class Money {
public:
	Money();
	// разделение всей суммы на фунты, шиллинги и пенсы с записью их в разные переменные
	void SplitUp(uint64_t allSum);
	// Получить сумму
	void Set(uint64_t f, uint16_t s, uint8_t p);
	// Ввести с консоли
	void ConIn();
	// Вывести сумму на консоль
	void Show();
	// сложение сумм
	void Plus(Money* a2);
	// вычитание сумм
	void Minus(Money* a2);
	// деление 2х сумм
	double Div(Money* a2);
	// деление суммы на число
	void DivN(float arg);
	// умножение суммы на число
	void Mult(float arg);
	// сравнение
	uint8_t Compare(Money* a2);
	//выводит фунты, шиллинги и пенсы. 
	void Print();
	//геттер для allSum
	uint64_t AllSumGet();

private:
	uint64_t funt; // количество фунтов funt
	uint16_t shil; // количество шиллингов shil
	uint8_t pen; // количество пенсов
};

#endif
