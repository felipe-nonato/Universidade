/*****************************************************************************
 * Instituto Federal de Educação Ciência e Tecnologia da Paraíba			 
 * Campus Campina Grande													 
 * Curso Superior em Engenharia da Computação								 
 * Professor: Cesar Vasconcelos												 
 * 																			 
 * Copyright - Cesar Vasconcelos											 
 * Este marerial foi elaborado apenas para ser utilizado pelos alunos da 	 
 * disciplina Estruturas de Dados, do curso de Eng. da Computação do IFPB.	 
 * 																			 
 * Nenhuma parte deste material pode ser reproduzida ou transmitida			 
 * de qualquer modo ou por qualquer meio sem prévia autorização do 			 
 * autor e sem lhe ser dado o devido crédito.								 
 * **************************************************************************/

#include "filaenccab.h"
#include <stdio.h>
#include <stdlib.h>

int main (void) {

    /* Teste de funções - Cesar Vasconcelos */

	// a "cabeça" da fila...
	TFilaEncCab fila;

    // coloca a fila num estado válido (e consistente)
    criarFila( &fila );

    if( filaVazia( fila ) ) printf( "Esta vazia!" );

    enfileirar( &fila, 10 );
    enfileirar( &fila, 20 );
    enfileirar( &fila, 30 );

    int frente; elementoFrente( fila, &frente );
    printf( "\nElemento frente: %d", frente  );

    imprimir( fila );
    printf( "\nTamanho da fila: %d", tamanhoFila( fila )  );

    desenfileirar( &fila, &frente ); //10
    printf( "\n\nElemento desenfileirado: %d", frente );

    imprimir( fila );
    printf( "\nTamanho da fila: %d", tamanhoFila( fila )  );

   	desenfileirar( &fila, &frente ); //20
    printf( "\n\nElemento desenfileirado: %d", frente );
   	desenfileirar( &fila, &frente ); //30
    printf( "\n\nElemento desenfileirado: %d", frente );

    // e se quem utiliza a biblioteca comete equívocos?
    printf( "\n%s", desenfileirar( &fila, &frente ) ? "Sucesso" : "Erro na retirada!" );

    imprimir( fila );
    printf( "\nTamanho da fila: %d", tamanhoFila( fila )  );



    /*--------------------------------------------------------------------------------------------------------------*/


    /* Teste de funções - Luís Felipe Ferreira */

    printf("\n\n------- Funções testes da avaliação -------\n");

    int vetor[] = {5,7,8,3,1,2};
    int len = sizeof(vetor)/sizeof(vetor[0]);
    enfileirar_grupo(&fila,vetor,len);
    imprimir(fila);

    TFilaEncCab* clone = malloc(sizeof(TFilaEncCab));
    clone = clonar(&fila);
    if (clone==NULL)
    {
        printf("NULO");
    }else
    {
        imprimir_clone(*clone);
    }
    
	return 0;
}