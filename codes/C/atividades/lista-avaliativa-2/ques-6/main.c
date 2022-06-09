#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "head.h"

int main()
{
    Ponto p1;
    Ponto p2;
    recebePontos(&p1,&p2);
    printf("\n--------------------------------------------------\n");
    printf("A distancia entre os dois pontos [função 01]: %.2f\n",distancia(p1,p2));
    printf("A distancia entre os dois pontos [função 02]: %.2f",distanciaNova(&p1,&p2)); //chamada atraves do endereço de memoria
    printf("\n--------------------------------------------------\n");

    //com alocação dinamica
    Ponto *pontos = (Ponto*)malloc(2*sizeof(Ponto));
    recebePontos(&pontos[0],&pontos[1]);
    printf("A distancia entre os dois pontos [alocação dinamica]: %.2f\n",distancia(pontos[0],pontos[1]));
    free(pontos);
    return 0;
}
