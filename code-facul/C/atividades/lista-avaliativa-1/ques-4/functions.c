// ------------ QUESTÃO 4 ------------

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isValid(int tamanho, char str[tamanho], char formato1, char formato2){
    int groups[tamanho-3];
    int cont = 0;
    int maiores[3];
    //Agrupando valores
    for (int i = 0;i<tamanho;i++){
        if (str[i] != formato1 && str[i] != formato2){
            groups[cont] = str[i]-'0';
            cont++;
        }
    }
    //verificando maiores
    for (int i = 0; i<3;i++){
        if (i==0){
            for (int j = 0; j<3;j++){
                if(j ==0){
                    maiores[i] = groups[j];
                }else if(maiores[i]<=groups[j]){
                    maiores[i] = groups[j];
                }
            }
        }else if(i==1){
            for (int j = 3; j<6;j++){
                if(j ==3){
                    maiores[i] = groups[j];
                }else if(maiores[i]<=groups[j]){
                    maiores[i] = groups[j];
                }
            }
        }
        else if(i==2){
            for (int j = 6; j<9;j++){
                if(j ==6){
                    maiores[i] = groups[j];
                }else if(maiores[i]<=groups[j]){
                    maiores[i] = groups[j];
                }
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