#include <stdio.h>

int main (void){

int a=5, b=6, c=7;
int v[10] = {0,10,20,30,40,50,60,70,80,90};
int *pt1,*pt2,*pt3;
 pt1= &a;
 pt2= &b;
 pt3= &c;

 pt1= pt3;
 pt2= pt3;

 *pt1 = *pt2 + *pt3;

pt1= &v[3];
for (int k=0; k<3; k++) {
  *pt1 += 1000;
  *pt1 += 2;

  
}
  printf("%d\n",*pt1);
  printf("%d\n",*pt2);
  printf("%d\n",*pt3);
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  for (int j = 0; j < 10; j++){
    printf("%d ",v[j]);
  }
  return 0;
  }