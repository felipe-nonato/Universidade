// ----- QUESTÃO 1 -----

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>

void lerMatriz (int vezes, Taluno alunos[vezes]){
        for (int i=0; i<vezes; i++){
            scanf("%d", &alunos[i].matricula);
            scanf("%d", &alunos[i].media);    
        }

}