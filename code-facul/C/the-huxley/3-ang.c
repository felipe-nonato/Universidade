#include <stdio.h>

int main(void) {
  /* code */
  float ang1;
  scanf("%f",&ang1);
  float ang2;
  scanf("%f",&ang2);
  float ang3 = 180-(ang1 + ang2);
  printf("3o angulo=%f", ang3);

  return 0;
}
