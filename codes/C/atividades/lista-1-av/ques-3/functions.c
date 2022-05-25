// ------------ QUESTÃO 3 ------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./head.h"

void menor(int m, int n, int mat[m][n], int *menor, int *l, int *c){
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            if(i==0 && j ==0){
                *menor = mat[i][j];
                *l = i;
                *c = j;
            }else if(i==j && mat[i][j]<=*menor){
                *menor = mat[i][j];
                *l = i;
                *c = j;
            }
        }
    }
    printf("\n---- sobre a diagonal principal ----\n\nMenor valor: %d\nposição: linha:[%d], coluna:[%d]\n",*menor,*l,*c);
}

void gerarMatriz (int l, int c,int m[l][c]){
        srand(time(0));
        printf("\n\nMatriz: \n\n");
    
        for (int i=0; i<l; i++){
            for (int j=0; j<c; j++){
                m[i][j]=rand()%10;
                printf("%d\t", m[i][j]);    
        }
        printf("\n");
        }
}