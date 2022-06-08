#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "head.h"

float distancia( Ponto p1, Ponto p2 ){
    printf("Digite os pontos:\n\n");
    printf("X (ponto 01): ");   
    scanf("%d", &p1.x);
    printf("Y (ponto 01): ");   
    scanf("%d", &p1.y);
    printf("------------------------\n");
    printf("X (ponto 02): ");   
    scanf("%d", &p2.x);
    printf("Y (ponto 02): ");   
    scanf("%d", &p2.y);

    double d = (p2.x-p1.x) + (p2.y-p1.y);
    return sqrt(d);
}