#include "Calculadora_202121250029.h"
#include <iostream>

class Cliente_202121250029 {
public:
    static void executar();
};

void Cliente_202121250029::executar() {
    Calculadora_202121250029 calc;
    double a = 12.0, b = 4.0;

    std::cout << "Soma: " << calc.somar(a, b) << std::endl;
    std::cout << "Subtracao: " << calc.subtrair(a, b) << std::endl;
    std::cout << "Multiplicacao: " << calc.multiplicar(a, b) << std::endl;

    try {
        std::cout << "Divisao: " << calc.dividir(a, b) << std::endl;
        std::cout << "Divisao por zero (teste): ";
        std::cout << calc.dividir(a, 0) << std::endl; // Gatilho do erro
    } catch (const std::invalid_argument& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }
}

int main() {
    Cliente_202121250029::executar();
    return 0;
}