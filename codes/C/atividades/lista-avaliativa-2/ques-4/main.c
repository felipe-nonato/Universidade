#include <stdlib.h>
#include <stdio.h>
#include "head.h"

int main()
{   
    // interface inicial
    // printf("");
    int vezes;
    printf("Quantos livros você deseja adicionar? R = ");
    scanf("%d",&vezes);
    Livro livros[vezes];
    adicionarLivros(vezes,livros);
    printf("%d",vezes);
    imprimirVetor(vezes,livros);
    return 0;
}