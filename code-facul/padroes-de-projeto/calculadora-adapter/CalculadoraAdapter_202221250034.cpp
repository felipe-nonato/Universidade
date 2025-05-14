#include "CalculadoraAdapter_202221250034.hpp"

double CalculadoraAdapter_202221250034::somar(const std::vector<double> &valores)
{
    if (valores.empty())
        return 0;

    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++)
    {
        resultado = Calculadora_202221250034::soma(resultado, valores[i]);
    }
    return resultado;
}

double CalculadoraAdapter_202221250034::subtrair(const std::vector<double> &valores)
{
    if (valores.empty())
        return 0;

    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++)
    {
        resultado = Calculadora_202221250034::subtracao(resultado, valores[i]);
    }
    return resultado;
}

double CalculadoraAdapter_202221250034::multiplicar(const std::vector<double> &valores)
{
    if (valores.empty())
        return 0;

    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++)
    {
        resultado = Calculadora_202221250034::multiplicacao(resultado, valores[i]);
    }
    return resultado;
}

double CalculadoraAdapter_202221250034::dividir(const std::vector<double> &valores)
{
    if (valores.empty())
        return 0;

    double resultado = valores[0];
    for (size_t i = 1; i < valores.size(); i++)
    {
        resultado = Calculadora_202221250034::divisao(resultado, valores[i]);
    }
    return resultado;
}

std::string CalculadoraAdapter_202221250034::getMatricula() const
{
    return "202221250034";
}