// ------------ QUESTÃO 4 ------------

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isValid(int tamanho, char str[tamanho]){
    int groups[3][3];
    int maiores[3];
    //Agrupando valores
    for (int j = 0,k=0;k<3;j++,k++){
        groups[0][j] = str[k] - '0';
    }
    for (int j = 0,k=4;k<7;j++,k++){
        groups[1][j] = str[k] - '0';
    }
    for (int j = 0,k=8;k<11;j++,k++){
        groups[2][j] = str[k] - '0';
    }
    //verificando maiores
    for (int i = 0; i<3;i++){
        for (int j = 0; j<3;j++){
            if (i==0 && j == 0){
                
            }
        }
    }

    // for (int i=0; i<3; i++){
    //         for (int j=0; j<3; j++){
    //             printf("%d\t", groups[i][j]);
    //         }
    //         printf("\n");
    //     }
}

int maior(int x, int y){
    if (x>=y){
        return x;
    }
    else{
        return y;
    }
}