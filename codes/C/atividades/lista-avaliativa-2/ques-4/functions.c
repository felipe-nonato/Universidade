#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "head.h"

void adicionarLivros(unsigned short int vezes, Livro livros[vezes]){
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