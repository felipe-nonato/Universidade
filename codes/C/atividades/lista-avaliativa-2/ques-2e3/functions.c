#include "head.h"
#include <stdio.h>


void recebe_retangulo(Tretangulo *retangulo){
    printf("Ponto v1 (retangulo): ");
    scanf("%d", &retangulo->v1.x);
    scanf("%d", &retangulo->v1.y);
    printf("Ponto v2 (retangulo): ");
    scanf("%d", &retangulo->v2.x);
    scanf("%d", &retangulo->v2.y);
}

void recebe_ponto(struct Ponto *ponto){
    printf("Ponto: ");
    scanf("%d", &ponto->x);
    scanf("%d", &ponto->y);
}

void dentro(Tretangulo retangulo,struct Ponto ponto){
    if((retangulo.v1.x<=ponto.x && ponto.x<=retangulo.v2.x) && (retangulo.v1.y<=ponto.y && ponto.y<=retangulo.v2.y)){
        printf("Esta dentro do quadrado");
    }else{
        printf("Esta fora do quadrado");
    }
}