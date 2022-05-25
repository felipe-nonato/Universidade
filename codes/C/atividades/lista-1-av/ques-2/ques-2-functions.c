#include <stdio.h>
#include "./ques-2.h"

float precoUnitario(int peso, float preco){
    float peso_kg = peso/1000;
    float preco_unitario = preco/peso_kg;
    return preco_unitario;
}

void maisBarato(int vezes,int numero[vezes], float unitario[vezes]){
    float valueCheap; 
    int moreCheap;
    for(int i = 0; i<vezes; i++){
        if(i==0){
            valueCheap = unitario[i];
            moreCheap = numero[i];
        }else if(unitario[i]<=valueCheap){
            valueCheap = unitario[i];
            moreCheap = numero[i];
        }
    }
    printf("Produto mais barato: Doce %d, R$%.2f/kg", moreCheap, valueCheap);
}
