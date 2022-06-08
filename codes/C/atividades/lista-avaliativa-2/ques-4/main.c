#include <stdlib.h>
#include <stdio.h>
#include "head.h"

int main()
{   
    // interface inicial
    // printf("");
    int vezes;
    printf("Q/uantos livros você deseja adicionar? R = ");
    scanf("%d",&vezes);
    Livro *livros = (Livro*)malloc(vezes*sizeof(Livro));
    adicionarLivros(vezes,livros);
    imprimirVetor(vezes,livros);
    mediaPreco(vezes,livros);
    return 0;
}