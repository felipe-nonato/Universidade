#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char flag[2];
  int ano;
  float velocidade;
  short int cont=0;
  int ret;
  int maior_ano = 0;
  float maior_vel = 0;
  float vel_total;
  float media;
if (cont == 0){
    scanf("\n%s", flag);
}
  while(flag != "n"){
    if (cont != 0){
      scanf("\n%s", flag);
      }
    ret = stricmp(flag,"n");
    if (ret == 0){break;}
    scanf("\n%d",&ano);
    if (ano > maior_ano){maior_ano = ano;}
    scanf("\n%f",&velocidade);
    if(velocidade > maior_vel){
      maior_vel = velocidade;
    }
    cont++;
    vel_total += velocidade;
    media = vel_total/cont;
    }
  printf("%.2f\n%d\n%.2f\n",maior_vel,maior_ano,media);
  return 0;
}
