// ----- QUESTÃO 1 -----

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>

void ler (int vezes, Taluno alunos[vezes]){
        for (int i=0; i<vezes; i++){
            scanf("%d", &alunos[i].matricula);
            scanf("%d", &alunos[i].media);    
        }

}

void comparar(int vezes, Taluno alunos[vezes]){
    ordena(vezes,alunos);

    for (int i = 0; i<vezes;i++){
        if(i==0){
            printf("%d ", alunos[i].matricula);
        }
        if(alunos[i].media == alunos[i+1].media){
            printf("%d ", alunos[i+1].matricula);
        }else{
            break;
        }
    }
}


void ordena(int vezes,Taluno vet[vezes]){
    int i, j, aux, aux2;
    
    for(i=0; i<vezes; i++){
        for(j=i+1; j<vezes; j++){
            if( vet[i].media < vet[j].media){
                aux = vet[i].media;
                aux2 = vet[i].matricula;
                vet[i].media = vet[j].media;
                vet[i].matricula = vet[j].matricula;
                vet[j].media = aux;
                vet[j].matricula = aux2;
            }
        }
    }
    // for(int i = 0;i<vezes;i++){
    //     printf("\n%d ",vet[i].matricula);
    //     printf("%d\n",vet[i].media);
    // }
}