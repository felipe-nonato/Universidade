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
                maiores[i] = groups[i][j];
            }else if(i==1 && j == 0){
                maiores[i] = groups[i][j];
            }else if(i==2 && j == 0){
                maiores[i] = groups[i][j];
            }else if (maiores[i]<=groups[i][j]){
                maiores[i] = groups[i][j];
            }
            
        }
    }
    int soma = 0;
    for (int i=0; i<3; i++){
            soma += maiores[i];
        }
    if((str[12]-'0') == soma%10){printf("VALIDO");}
    else{printf("INVALIDO");}
}