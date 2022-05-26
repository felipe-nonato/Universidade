// ------------ QUESTÃO 5 ------------
#include "./head.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void verificaMagico(int l,int m[l][l]){
    int num = 0;
    int somaLinhas[l];
    for (int i=0; i<l; i++){
        somaLinhas[i] = 0;    
    }
    int somaColunas[l];
    for (int i=0; i<l; i++){
        somaColunas[i] = 0;
    }
    int somaDiagonalP = 0;
    int somaDiagonalS = 0;

    for (int i=0; i<l; i++){
            for (int j=0; j<l; j++){
                somaLinhas[i] += m[i][j];
                if(i==j){ somaDiagonalP += m[i][j];
                }
            }
            somaDiagonalS += m[i][(l-1)-i];
            
        }

    for (int i=0; i<l; i++){
            for (int j=0; j<l; j++){
                somaColunas[i] += m[j][i];
            }
        }
    int teste = 0;
    for(int i =0; i<l;i++){
        if(somaColunas[i]==somaLinhas[i]){
            teste++;
             if(teste==l){num = somaColunas[i];}
            // printf("deu certo!\n%d\n%d\n%d\n",*somaColunas,*somaLinhas,teste);
        }
    }
    if(somaDiagonalP==num && somaDiagonalS==num){
        printf("A matriz eh magica");
    }
    else{
        printf("A matriz nao eh magica");
    }


}

void gerarMatriz (int l,int m[l][l]){

        for (int i=0; i<l; i++){
            for (int j=0; j<l; j++){
                scanf("%d", &m[i][j]);
            }
        }
    printf("\n\n");
}