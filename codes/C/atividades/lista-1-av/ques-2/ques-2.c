#include "./ques-2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //lendo número de doces
  int vezes;
  printf("Total de doces comprados: ");
  scanf("%d",&vezes);

  //lendo dados dos doces
  doce doces[vezes];
  for(int i = 0; i<vezes;i++){
    printf("Doce %d:\n",(i+1));
    printf("Peso (g): ");
    scanf("%d",&doces[i].peso);
    printf("Preço (R$): ");
    scanf("%f",&doces[i].preco);
    doces[i].preco_u = precoUnitario(doces[i].peso,doces[i].preco);
    printf("Preço unitário = R$%.2f/kg\n",doces[i].preco_u);
  }

  return 0;
}