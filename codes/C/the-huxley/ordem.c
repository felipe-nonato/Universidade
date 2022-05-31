#include <stdio.h>

int main(void) {
  int num1;
  scanf("%d",&num1);
  int num2;
  scanf("%d",&num2);
  int num3;
  scanf("%d",&num3);

  if (num1<=num2 && num1<=num3){
    printf("%d\n",num1);
    if (num2<=num3){
      printf("%d\n",num2);
      printf("%d",num3);
    }
    else{
      printf("%d\n",num3);
      printf("%d",num2);
    }
    }

  else if (num2<=num1 && num2<=num3){
    printf("%d\n",num2);
    if (num1<=num3){
      printf("%d\n",num1);
      printf("%d",num3);
    }
    else{
      printf("%d\n",num3);
      printf("%d",num1);
    }
  }

  else if (num3<=num2 && num3<=num1){
      printf("%d\n",num3);
      if (num1<=num2){
        printf("%d\n",num1);
        printf("%d",num2);
      }
      else{
        printf("%d\n",num2);
        printf("%d",num1);
      }
    }

  return 0;
}
