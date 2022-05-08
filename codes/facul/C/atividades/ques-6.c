#include <stdio.h>
#include <math.h>

int main(void) {
  int x;
  int x1;
  int a;
  printf("Digite < A > :");
  scanf("%d",&a);
  int b;
  printf("Digite < B > :");
  scanf("%d",&b);
  int c;
  printf("Digite < C > :");
  scanf("%d",&c);
  int pot = pow(b,2);
  int delta = pot-(4*a*c);
  // printf("%d",delta );

  if(delta<0){
    printf("Raizes imaginarias");
  }else if(delta==0){
    x = -b/(2*a);
    printf("X = %d",x);
  }else{
    x = -b+pow(delta,0.5)/(2*a);
    x1 = -b-pow(delta,0.5)/(2*a);
    printf("X' = %d\n",x);
    printf("X'' = %d",x1);


  }

  return 0;
}
