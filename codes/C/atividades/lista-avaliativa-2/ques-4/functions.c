#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "head.h"

void adicionarLivros(int vezes, Livro livros[]){
    printf("Adicionando livros:\n");
    printf("\n----------------------------------\n");
    for(short int i = 1; i<=vezes;i++){
        printf("Titulo do livro [%d]: ", i);
        livros[i].titulo = receberString();
        printf("Autor do livro [%d]: ", i);
        livros[i].autor = receberString();
        printf("Preço do livro [%d]: ", i);
        livros[i].preco = receberPreco();
        printf("\n-------------------------------\n");

    }
    printf("\nLivros Adicionados com sucesso\n");
    printf("\n----------------------------------\n");
}

/* void mediaPreco(int vezes, Livro livros[]){
    float soma_preco;
    float media;
    for(short int i = 1; i<=vezes;i++){
        soma_preco += livros[i].preco;
    }
    media = soma_preco/vezes;
    printf("A media dos preços dos livros é: %f",media);
} */

float receberPreco(){
    float preco;
    scanf("%f", &preco);
    return preco;
}

char *receberString(){
    char *nome = (char*)malloc(50*sizeof(char));
    scanf(" %49[^\n]", nome);
    return nome;
}

void imprimirVetor(int vezes, Livro livros[]){
    for(int i = 0; i<vezes;i++){
        printf("Titulo do livro [%d]: ", i);
        printf("%s",livros[i].titulo);
        printf("Autor do livro [%d]: ", i);
        printf("%s",livros[i].autor);
        printf("Preço do livro [%d]: ", i);
        printf("%f",livros[i].preco);
        printf("\n-------------------------------\n");
    }
}