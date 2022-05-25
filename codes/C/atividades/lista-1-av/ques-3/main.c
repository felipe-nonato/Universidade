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

    int m[l][c];
    srand(time(0));
    printf("\n\nMatriz: \n\n");
  
    for (int i=0; i<l; i++){
        for (int j=0; j<c; j++){
            m[i][j]=rand()%10;
            printf("%d\t", m[i][j]);    
    }
    printf("\n");
    }

    for (int i=0; i<5; i++){
           
    }

    return 0;
}
