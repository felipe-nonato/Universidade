#include <stdlib.h>
#include <stdio.h>
#include "head.h"

int main()
{   
    // interface inicial
    printf("Escolha a função que você deseja realizar: ");
    int vezes;
    printf("Quantos livros você deseja adicionar? R = ");
    scanf("%d",&vezes);
    Livro *livros = (Livro*)malloc(vezes*sizeof(Livro));
    adicionarLivros(vezes,livros);
    mediaPreco(vezes,livros);
    return 0;
}