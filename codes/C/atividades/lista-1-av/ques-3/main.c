// ------------ QUESTÃO 3 ------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./head.h"

int main()
{   
    int l,c;
    printf("número de linhas: ");
    scanf("%d",&l);
    printf("número de colunas: ");
    scanf("%d",&c);

    int matriz[l][c];
    int result,lin,col;

    gerarMatriz(l,c,matriz);
    menor(l,c,matriz,&result,&lin,&col);

    return 0;
}
