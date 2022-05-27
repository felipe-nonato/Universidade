// ------------ QUESTÃO 2 ------------

#include <stdio.h>
#include "./head.h"

float precoUnitario(int peso, float preco){
    float preco_unitario = (preco/peso)*1000;
    return preco_unitario;
}

void maisBarato(int vezes,doce doces[vezes]){
    float valueCheap; 
    int moreCheap;
    for(int i = 0; i<vezes; i++){
        if(i==0){
            valueCheap = doces[i].preco_u;
            moreCheap = doces[i].numero;
        }else if(doces[i].preco_u<=valueCheap){
            valueCheap = doces[i].preco_u;
            moreCheap = doces[i].numero;
        }
    }
    printf("\nProduto mais barato: Doce %d, R$%.2f/kg\n", moreCheap, valueCheap);
}

int pesoTotal(int vezes,doce doces[vezes]){ 
   int soma = 0;
    for(int i = 0; i<vezes; i++){
            soma += doces[i].peso;
    }
    return soma;
}

float gastoTotal(int vezes,doce doces[vezes]){ 
    float soma = 0;
    for(int i = 0; i<vezes; i++){
            soma += doces[i].preco;
    }
    return soma;
}
