#include "Calculadora_202121250029.h"
#include <stdexcept>

double Calculadora_202121250029::somar(double a, double b) {
    return a + b;
}

double Calculadora_202121250029::subtrair(double a, double b) {
    return a - b;
}

double Calculadora_202121250029::multiplicar(double a, double b) {
    return a * b;
}

double Calculadora_202121250029::dividir(double a, double b) {
    if (b == 0) throw std::invalid_argument("Divisão por zero!");
    return a / b;
}