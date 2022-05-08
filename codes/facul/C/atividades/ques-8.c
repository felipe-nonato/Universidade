#include <stdio.h>

int main(void) {
  /* code */

  //declaração de variaveis
  int n;
  int cont = 0;
  scanf("%d",&n);

  for(int i = n; i != 0; i--){
    if(n%i == 0){
      cont++;
    }
  }
  if(cont == 2){
    printf("Primo!");
  }else{
    printf("Não é primo :(");
  }
  return 0;
}
