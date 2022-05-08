#include <stdio.h>

int main(void) {
  short int cont = 0;
  float x = 0;
  if (cont == 0) {scanf("%f",&x);}
  while (x != -1) {
    //Lendo valor
    if (cont != 0){scanf("%f",&x);}
    //caso limite
    if(x == -1){break;}
    //Verificação
    cont++;
    if (x>0 && x<7) {printf("ACIDA\n"); continue;}
    else if(7<x && x<=14){printf("BASICA\n"); continue;}
    else if (x == 7){printf("NEUTRA\n"); continue;}
    else{printf("ERRO\n");}
  }
  return 0;
}
