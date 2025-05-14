#include "CalculadoraAdapter_202121250029.hpp"

double CalculadoraAdapter_202121250029::somar(const std::vector<double>& valores) {
    if (valores.empty()) return 0;
    
    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++) {
        resultado = calculadora.somar(resultado, valores[i]);
    }
    return resultado;
}

double CalculadoraAdapter_202121250029::subtrair(const std::vector<double>& valores) {
    if (valores.empty()) return 0;
    
    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++) {
        resultado = calculadora.subtrair(resultado, valores[i]);
    }
    return resultado;
}

double CalculadoraAdapter_202121250029::multiplicar(const std::vector<double>& valores) {
    if (valores.empty()) return 0;
    
    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++) {
        resultado = calculadora.multiplicar(resultado, valores[i]);
    }
    return resultado;
}

double CalculadoraAdapter_202121250029::dividir(const std::vector<double>& valores) {
    if (valores.empty()) return 0;
    
    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++) {
        resultado = calculadora.dividir(resultado, valores[i]);
    }
    return resultado;
}

std::string CalculadoraAdapter_202121250029::getMatricula() const {
    return "202121250029";
}