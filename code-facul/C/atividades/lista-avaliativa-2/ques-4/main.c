// ----- QUESTÃO 4 -----

#include <stdlib.h>
#include <stdio.h>
#include "head.h"

int main()
{   
    // interface inicial
    int vezes;
    printf("Seja Bem Vind@ !!\n\nVamos começar criando uma biblioteca\nQuantos livros você deseja adicionar? R = ");
    scanf("%d",&vezes);
    Livro *livros = (Livro*)malloc(vezes*sizeof(Livro));
    adicionarLivros(vezes,livros);


    int func;
    while (func != 4)
    {
        printf("1 - Calcular media\n2 - Ver quantos livros há com o valor acima da media\n3 - Procura titulo/autor na biblioteca\n4 - Sair do programa\n");
        printf("\nEscolha a função que você deseja realizar [1-4]: ");
        scanf("%d",&func);
        if(func == 4){
            break;
        }
        else if (func == 1)
        {
            mediaPreco(vezes,livros);
        }
        else if (func == 2)
        {
            maiorMedia(vezes,livros);
        }
        else if (func == 3){
            char nome[51];
            printf("Digite o nome para pesquisar: ");
            scanf(" %51[^\n]", nome);
            nomeNaBiblioteca(nome,vezes,livros);
        }
        else{
            printf("\n-----------------------------------\n");
            printf("\nERRO! escolha um número entre 1 e 4\n");
            printf("\n-----------------------------------\n");
        }
        
    }
    printf("\nObrigado por usar meu programa! :)\n");
    return 0;
}