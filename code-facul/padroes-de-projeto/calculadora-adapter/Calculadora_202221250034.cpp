#include "Calculadora_202221250034.hpp"
#include <iostream>

double Calculadora_202221250034::soma(double x, double y) {
    return x + y;
}

double Calculadora_202221250034::subtracao(double x, double y) {
    return x - y;
}

double Calculadora_202221250034::multiplicacao(double x, double y) {
    return x * y;
}

double Calculadora_202221250034::divisao(double x, double y) {
    if (y == 0) {
        std::cerr << "Erro: Divisão por zero!" << std::endl;
        return 0;
    }
    return x / y;
}