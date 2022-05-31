#include <stdio.h>

int main(void) {
  short int soma = 0;
  for (int i = 0; i<500; i++){
    if( i%2 == 0 && i%3 == 0){
      soma += i;
    }
  }printf("%d\n",soma);
  return 0;
}
