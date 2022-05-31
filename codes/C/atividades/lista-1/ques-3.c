#include <stdio.h>

int main(void) {
  short int idade = 0;
  short int peso = 0;
  printf("idade: __\b\b");
  scanf("%hd",&idade);
  printf("peso: ___\b\b\b");
  scanf("%hd",&peso);

  printf("Grupo de risco:");
  if(idade<20){
    if(peso<=60){printf("9");}
    else if(peso>60 && peso<=90){printf("8");}
    else{printf("7");}
  }
  else if(idade>=20 && idade <=50){
    if(peso<=60){printf("6");}
    else if(peso>60 && peso<=90){printf("5");}
    else{printf("4");}
  }
  else{
    if(peso<=60){printf("3");}
    else if(peso>60 && peso<=90){printf("2");}
    else{printf("1");}
  }
  return 0;
}
