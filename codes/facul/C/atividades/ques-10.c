#include <stdio.h>

int main(void) {
  /* code */

  //declaração de variaveis
  float n;
  float h;
  float f_somador_i;
  float f_somador_j;

  //calculo
  for(int i = 1; i != 50; i++){
    f_somador_i += i;
  }
  for(int j = 1; j != 99; j+=2){
    f_somador_j += j;
  }
  h = f_somador_j/f_somador_i;
  printf("H (bruto): %f",h);

  return 0;
}
