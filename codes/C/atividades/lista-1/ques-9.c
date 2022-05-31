#include <stdio.h>

int main(void) {
  /* code */

  //declaração de variaveis
  float n;
  float h;
  float f_somador_i;
  int d_somador_i;

  //leitura de dados
  scanf("%f",&n);

  //calculo
  for(int i = 1; i != n+1; i++){
    f_somador_i += i;
    d_somador_i += i;
  }
  h = 1/f_somador_i;
  printf("H (em fração): 1/%d\n",d_somador_i);
  printf("H (bruto): %f",h);

  return 0;
}
