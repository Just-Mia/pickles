#pragma once
#include <iostream>

class Calculator {
public:
    // Конструктор і деструктор
    Calculator();
    ~Calculator();

    // Оголошення методів (реалізують різні учасники команди)
    int add(int a, int b);          // Метод 1
    int subtract(int a, int b);     // Метод 2
    int multiply(int a, int b);     // Метод 3
    double divide(int a, int b);    // Метод 4
    int power(int base, int exp);   // Метод 5
};