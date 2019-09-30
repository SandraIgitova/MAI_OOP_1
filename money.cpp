#include "money.h"

Money::Money() {
    funt = 0;
    shil = 0;
    pen = 0;
}

void Money::Mix() {
    allSum = (funt * 20 * 12) + (uint64_t)(shil * 12) + (uint64_t)(pen);
}

void Money::splitUp() {
    funt = (uint64_t)((uint64_t)(allSum/12)/20);
    shil = (uint16_t)((allSum - funt*20*12)/12);
    pen = (uint8_t)(allSum-funt*20*12-((uint64_t)shil)*12);
}

// Получить сумму
void Money::get() {
    uint16_t pen16;
    std::cin >> funt;
    std::cin >> shil;
    std::cin >> pen16; pen = (uint8_t)(pen16);
}

// Вывести сумму
void Money::show() {
    uint16_t pen16;
    pen16 = (uint16_t)(pen);
    std::cout << "Фунты: " << funt << std::endl;
    std::cout << "Шиллинги: " << shil << std::endl;
    std::cout << "Пенсы: " << pen16 << std::endl;
}
// сложение сумм
void Money::Plus(uint64_t a2) {
    this->Mix();
    this->allSum += a2;
    this->splitUp();
}
// вычитание сумм
void Money::Minus(uint64_t a2) {
    this->allSum = this->allSum - a2;
    this->splitUp();
}
// деление 2х сумм
void Money::Div(uint64_t a2) {
    //this->allSum = this->allSum / a2;
    std::cout << "\nРезультат деления:" << std::endl;
    std::cout << (double)(((double)(this->allSum)) / a2) << std::endl;
}
// делене суммы на число
void Money::DivN(float arg) {
    std::cout << "\nРезультат деления:" << std::endl;
    this->allSum = ((float)(this->allSum)) / arg ;
    this->splitUp();
}
// умножение суммы на число
void Money::Mult(float arg) {
    std::cout << "\nРезультат умножения:" << std::endl;
    this->allSum = ((float)(this->allSum)) * arg;
    this->splitUp();
}

//выводит фунты, шиллинги и пенсы. 
void Money::Print() {
    std::cout << "Фунты: " << funt << " " << "Шиллинги: " << shil << " " << "Пенсы: " << pen << " ";
}

// allSum - Сумма в пенсах
uint64_t Money::allSumGet() {
    return allSum;
}
void Money::allSumSet() {
    this->allSum = (funt * 20 * 12 + (uint64_t)shil * 12 + (uint64_t)pen);;
}