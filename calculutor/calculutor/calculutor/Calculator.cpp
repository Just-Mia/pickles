#include "Calculator.h"
#include <cmath>

Calculator::Calculator() {
    std::cout << "Calculator created." << std::endl;
}

Calculator::~Calculator() {
    std::cout << "Calculator destroyed." << std::endl;
}

// Реалізації можуть виконуватись різними учасниками

int Calculator::add(int a, int b) {
}

int Calculator::subtract(int a, int b) {
}

int Calculator::multiply(int a, int b) {
}

double Calculator::divide(int a, int b) {
}

int Calculator::power(int base, int exp) {
}
