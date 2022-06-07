#include "head.h"
#include <stdio.h>


void recebe_retangulo(){
    Tretangulo retangulo;

    printf("Ponto v1: ");
    scanf("%d", &retangulo.v1.x);
    scanf("%d", &retangulo.v1.y);
    printf("Ponto v2: ");
    scanf("%d", &retangulo.v2.x);
    scanf("%d", &retangulo.v2.y);

    printf("%d ", retangulo.v1.x);
    printf("%d\n", retangulo.v1.y);
    printf("%d ", retangulo.v2.x);
    printf("%d\n", retangulo.v2.y);

}