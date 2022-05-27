// ----- QUESTÃO 1 -----

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>

void lerMatriz (int vezes, Taluno alunos[vezes]){
        int l=1;
        for (int i=0; i<l; i++){
            scanf("%d", &alunos[i].matricula);
            scanf("%d", &alunos[i].media);    
        }

        for (int i=0; i<l; i++){
            printf("%d ", alunos[i].matricula);
            printf("%d\n", alunos[i].media);    
        }
}