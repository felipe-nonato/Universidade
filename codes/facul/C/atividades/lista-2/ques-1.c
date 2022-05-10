#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* code */

  int P[10];
  int V[10];
  int S[10];


  for(int i = 2, j = 0; i<21, j<10; i++){
    if((i%2)==0){
      P[j] = i;
      j++;
    }
  }

  for(int i = 10, j = 0; i<20, j<10; i++,j++){
      V[j] = i;
  }

  for(int j = 0;j<10;j++){
      S[j] = V[j]+P[j];
  }


  //Print

  printf("V = ");
  for(int i=0;i<10;i++){
    printf("%.2d  ", P[i]);
  }
  printf("\n");
  printf("P = ");
  for(int i=0;i<10;i++){
    printf("%d  ", V[i]);
  }
  printf("\n");
  for(int i=0;i<42;i++){
    printf("-");
  }
  printf(" + ");
  printf("\n");
  printf("S = ");
  for(int i=0;i<10;i++){
    printf("%d  ", S[i]);
  }

  return 0;
}
