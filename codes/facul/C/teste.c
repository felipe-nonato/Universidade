#include <stdio.h>

int main(void) {
  /* code */
  int i;
  int k;
  for(i=0,k=99;i<100 && i<k;i++,k--){
    printf("%d",i);
    printf(" %d\n",k );
  }
  return 0;
}
