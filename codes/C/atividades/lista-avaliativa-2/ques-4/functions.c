#include <stdlib.h>
#include <stdio.h>
#include "head.h"

void adicionarLivros(int vezes, Livro livros[vezes]){
    printf("\nAdicionando livros:\n");
    printf("----------------------------------\n\n");
    for(short int i = 0; i<vezes;i++){
        printf("Titulo do livro [%.2d]: ", i+1);
        scanf(" %51[^\n]", livros[i].titulo);
        printf("Autor do livro [%.2d]: ", i+1);
        scanf(" %51[^\n]", livros[i].autor);
        printf("Preço do livro [%.2d]: ", i+1);
        scanf("%f", &livros[i].preco);
        printf("\n-------------------------------\n");

    }
    printf("\nLivros Adicionados com sucesso\n");
    printf("\n----------------------------------\n");
}

void mediaPreco(int vezes, Livro livros[vezes]){
    float soma_preco = 0;
    float media = 0;
    for(short int i = 0; i<vezes;i++){
        soma_preco += livros[i].preco;
    }
    media = soma_preco/(float)vezes;
    printf("A media dos preços dos livros é: %.2f",media);
}

void imprimirVetor(int vezes, Livro livros[vezes]){
    for(int i = 1; i<=vezes;i++){
        printf("Titulo do livro [%d]: ", i);
        printf("%s\n",livros[i].titulo);
        printf("Autor do livro [%d]: ", i);
        printf("%s\n",livros[i].autor);
        printf("Preço do livro [%d]: ", i);
        printf("%f\n",livros[i].preco);
        printf("\n-------------------------------\n");
    }
}