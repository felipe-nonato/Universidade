#include <stdio.h>
#include <stdlib.h>

//declaração de funções
  int doceMaisBarato(float unitario,float preco_mais_barato[3], int num_mais_barato[3], float *p);
  float calcularUnitario(float preco, float peso);
  float cacularPesoTotal();
  float calcularTotalGasto();

int main(void) {
  //declaração de variaveis
  int i;
  float peso;
  float preco;
  float somador_peso;
  float somador_preco;
  float unitario;
  float preco_mais_barato[3];
  float num_mais_barato[3];

  //solicitação de quantos doces (numero de repetição)
  printf("Informe o total de doces comprados: ");
  scanf("%d",&i);

  // laço
  for (int j = 0; j<i;j++){
    /* code */

    printf("Doce %d:\n",(j+1));

    printf("Informe o Peso (g): ");
    scanf("%f",&peso);

    printf("Informe o Preço (R$): ");
    scanf("%f", &preco);

    unitario = calcularUnitario(preco, peso);
    printf("Preço unitário calculado = R$%.2f/kg\n", unitario);
    mais_barato = doceMaisBarato();

    printf("\n%d\n", mais_barato);
    printf("%.2f\n\n", preco_mais_barato);

    somador_peso += peso;
    somador_preco += preco;
  }
  printf("Dados Finais da Compra:\n");
  printf("Produto mais barato: Doce %d, R$%.2f/kg\n",);
  printf("Foram comprados %.0fg de doce por R$%.2f", somador_peso, somador_preco);
  return 0;
}

//corpo das funções
  float calcularUnitario(float preco, float peso){
    float peso_kg;
    peso_kg = peso/1000;

    return preco/peso_kg;
  }

  int doceMaisBarato(float unitario,float preco_mais_barato[3], int num_mais_barato[3], float *p){
    for(int j = 0; j<len(preco_mais_barato);j++){
      if(j==0){
        num_mais_barato[j] = j+1;
        preco_mais_barato[j] = unitario;
      }
      else if (unitario <= num_mais_barato[j]){
          num_mais_barato[j] = j+1;
          preco_mais_barato[j] = unitario;
        }
    p = preco_mais_barato[j];
    return num_mais_barato[j];
    }
  }

  // float cacularPesoTotal(){

  // }

  // float calcularTotalGasto(){

  // }
