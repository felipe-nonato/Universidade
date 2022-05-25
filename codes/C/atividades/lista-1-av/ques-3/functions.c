// ------------ QUESTÃO 3 ------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./head.h"

void menor (int m, int n, int mat[m][n], int *menor, int *l, int *c){
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            if(i==0){
                *menor = mat[i][j];
                *l = i;
                *c = j;
            }else if(mat[i][j]<=*menor){
                *menor = mat[i][j];
                *l = i;
                *c = j;
            }
        }
    }
    printf("Menor valor: %d\nposição: linha:[%d], coluna:[%d]",*menor,*l,*c);
}
