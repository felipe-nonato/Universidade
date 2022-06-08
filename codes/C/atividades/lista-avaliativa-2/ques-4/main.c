#include <stdlib.h>
#include <stdio.h>
#include "head.h"

int main()
{   
    int vezes;
    printf("Quantos livros você deseja adicionar? R = ");
    scanf("%d",&vezes);
    Livro livros[vezes];
    adicionarLivros(vezes,livros);
    return 0;
}
