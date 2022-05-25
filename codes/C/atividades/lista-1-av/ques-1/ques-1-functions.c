#include "./ques-1.h"

int somaPrimos(int x,int y){
  int soma = 0;
  if(x<=y){
    for(int i = x; i<y+1; i++){
      if(verificaPrimo(i)){
          soma = soma + i;
        }
      }
    }else{
      for(int i = y; i<x+1; i++){
        if(verificaPrimo(i)){
          soma = soma + i;
        }
      }
    }
  return soma;
}

int verificaPrimo(int x){
  int cont = 0;
  for(int i = 1; i<x+1; i++){
    if(x%i == 0){
      cont++;
    }
  }
  if(x==1){return 1;}
  else if (cont==2){ return 1;}
  else{return 0;}
}