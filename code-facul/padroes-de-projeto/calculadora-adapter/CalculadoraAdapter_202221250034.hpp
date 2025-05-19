#ifndef CALCULADORA_ADAPTER_202221250034_H
#define CALCULADORA_ADAPTER_202221250034_H

#include "CalculadoraInterface.hpp"
#include "Calculadora_202221250034.hpp" // Incluindo a calculadora original do colega

class CalculadoraAdapter_202221250034 : public CalculadoraInterface
{
public:
    double somar(const std::vector<double> &valores) override;
    double subtrair(const std::vector<double> &valores) override;
    double multiplicar(const std::vector<double> &valores) override;
    double dividir(const std::vector<double> &valores) override;
    std::string getMatricula() const override;
};

#endif // CALCULADORA_ADAPTER_202221250034_H