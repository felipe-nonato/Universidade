// ------------ QUESTÃO 5 ------------
#include "./head.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tamanho;
    scanf("%d", &tamanho);
    int m[tamanho][tamanho];
    gerarMatriz(tamanho, m);
    verificaMagico(tamanho, m);
    return 0;
}
