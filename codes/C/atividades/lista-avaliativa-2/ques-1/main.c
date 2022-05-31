// ----- QUESTÃO 1 -----

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vezes;
    scanf("%d",&vezes);
    Taluno alunos[vezes];
    lerMatriz(vezes, alunos);
    return 0;
}
