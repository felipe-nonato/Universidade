// ------------ QUESTÃO 4 ------------

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 13;
    char str[13];
    printf("Escreva o CPF/CNPJ para verificar se é valido: ");
    scanf("%s", str);
    isValid(tamanho, str);

    return 0;
}
