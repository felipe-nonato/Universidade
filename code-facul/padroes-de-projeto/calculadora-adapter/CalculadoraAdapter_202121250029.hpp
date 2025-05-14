#ifndef CALCULADORA_ADAPTER_202121250029_H
#define CALCULADORA_ADAPTER_202121250029_H

#include "CalculadoraInterface.hpp"
#include "Calculadora_202121250029.h"

class CalculadoraAdapter_202121250029 : public CalculadoraInterface
{
private:
    Calculadora_202121250029 calculadora;

public:
    double somar(const std::vector<double> &valores) override;
    double subtrair(const std::vector<double> &valores) override;
    double multiplicar(const std::vector<double> &valores) override;
    double dividir(const std::vector<double> &valores) override;
    std::string getMatricula() const override;
};

#endif // CALCULADORA_ADAPTER_202121250029_H