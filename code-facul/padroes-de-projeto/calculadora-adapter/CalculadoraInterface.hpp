#ifndef CALCULADORA_INTERFACE_H
#define CALCULADORA_INTERFACE_H

#include <vector>
#include <string>

class CalculadoraInterface {
public:
    virtual double somar(const std::vector<double>& valores) = 0;
    virtual double subtrair(const std::vector<double>& valores) = 0;
    virtual double multiplicar(const std::vector<double>& valores) = 0;
    virtual double dividir(const std::vector<double>& valores) = 0;
    virtual std::string getMatricula() const = 0;
    virtual ~CalculadoraInterface() {}
};

#endif // CALCULADORA_INTERFACE_H