#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "head.h"

void adicionarLivros(int vezes, Livro livros[vezes]){
    printf("Adicionando livros:\n");
    printf("\n----------------------------------\n");
    for(short int i = 0; i<vezes;i++){
        printf("Titulo do livro [%.2d]: ", i+1);
        scanf(" %51[^\n]", livros[i].titulo);
        printf("Autor do livro [%.2d]: ", i+1);
        scanf(" %51[^\n]", livros[i].autor);
        printf("Preço do livro [%.2d]: ", i+1);
        scanf("%f", &livros[i].preco);
        printf("----------------------------------\n");


    }
    printf("Livros Adicionados com sucesso");
    printf("\n----------------------------------\n");
}

void mediaPreco(int vezes, Livro livros[vezes]){
    float soma_preco = 0;
    float media = 0;
    for(short int i = 0; i<vezes;i++){
        soma_preco += livros[i].preco;
    }
    media = soma_preco/(float)vezes;
    printf("\n---------------------------------------\n");
    printf("A media dos preços dos livros é: %.2f",media);
    printf("\n---------------------------------------\n");

}

void maiorMedia(int vezes, Livro livros[vezes]){
    float soma_preco = 0;
    float media = 0;
    for(short int i = 0; i<vezes;i++){
        soma_preco += livros[i].preco;
    }
    media = soma_preco/(float)vezes;
    int cont = 0;
    for(short int i = 0; i<vezes;i++){
        if(livros[i].preco > media){
            cont++;
        }
    }
    printf("\n---------------------------------------\n");
    printf("Há %d livros com preço acima da media", cont);
    printf("\n---------------------------------------\n");

}

void nomeNaBiblioteca(char *nome,int vezes, Livro livros[vezes]){
    for(int i=0;i<vezes;i++){
        if(strcmp(livros[i].titulo,nome) == 0 || strcmp(livros[i].autor,nome) == 0){
            printf("\n---------------------------------------\n");
            printf("\nTitulo do livro [%d]: ", i);
            printf("%s\n",livros[i].titulo);
            printf("Autor do livro [%d]: ", i);
            printf("%s\n",livros[i].autor);
            printf("Preço do livro [%d]: ", i);
            printf("%.2f\n",livros[i].preco);
            printf("\n---------------------------------------\n");
        }
    }
}

void imprimirVetor(int vezes, Livro livros[vezes]){
    for(int i = 1; i<=vezes;i++){
        printf("\n-------------------------------\n");
        printf("Titulo do livro [%d]: ", i);
        printf("%s\n",livros[i].titulo);
        printf("Autor do livro [%d]: ", i);
        printf("%s\n",livros[i].autor);
        printf("Preço do livro [%d]: ", i);
        printf("%f\n",livros[i].preco);
        printf("-------------------------------\n");
    }
}