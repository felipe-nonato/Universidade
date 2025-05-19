#include <iostream>
#include <vector>
#include <memory>
#include "CalculadoraInterface.hpp"
#include "CalculadoraAdapter_202121250029.hpp"
#include "CalculadoraAdapter_202221250034.hpp"
#include "Calculadora_202121250029.h"
#include "Calculadora_202221250034.hpp"

class Cliente_202121250029
{
public:
    static void executar()
    {
        // Criando adaptadores para as calculadoras
        std::vector<std::shared_ptr<CalculadoraInterface>> calculadoras;

        // Adicionando sua calculadora
        calculadoras.push_back(std::make_shared<CalculadoraAdapter_202121250029>());

        // Adicionando a calculadora do colega
        calculadoras.push_back(std::make_shared<CalculadoraAdapter_202221250034>());

        // Valores para teste
        std::vector<double> valores = {20.0, 4.0, 2.0};

        // Testando todas as calculadoras
        for (const auto &calc : calculadoras)
        {
            try
            {
                std::cout << "soma " << calc->somar(valores) << " utilizando a Calculadora de " << calc->getMatricula() << std::endl;

                std::cout << "subtração " << calc->subtrair(valores) << " utilizando a Calculadora de " << calc->getMatricula() << std::endl;

                std::cout << "multiplicação " << calc->multiplicar(valores) << " utilizando a Calculadora de " << calc->getMatricula() << std::endl;

                std::cout << "divisão " << calc->dividir(valores) << " utilizando a Calculadora de " << calc->getMatricula() << std::endl;

                std::cout << "---" << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cout << "Erro ao utilizar a calculadora " << calc->getMatricula() << ": " << e.what() << std::endl;
            }
        }
    }
};

int main()
{
    Cliente_202121250029::executar();
    return 0;
}