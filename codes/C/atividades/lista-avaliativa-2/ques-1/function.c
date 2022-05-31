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
    int media_maior;
    int matricula_maior;
    for (int i=0; i<vezes; i++){
              if(i == 0){
                  matricula_maior = alunos[i].matricula;
                  media_maior = alunos[i].media;
              }else if(media_maior==alunos[i].media){
                  
                  }
                else if(media_maior<alunos[i].media){
                matricula_maior = alunos[i].matricula;
                media_maior = alunos[i].media;
            }
        }
}
