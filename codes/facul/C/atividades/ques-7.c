#include <stdio.h>

int main(void) {
  //declaração de variaveis
  int i;
  float peso;
  float preco;
  float peso_kg;
  int mais_barato;
  int name_barato;
  float somador_peso;
  float somador_preco;

  //solicitação de quantos doces (numero de repetição)
  printf("Informe o total de doces comprados: ");
  scanf("%d",&i);

  // laço
  for (int j = 0; j<i;j++){
    /* code */

    printf("\nDoce %d:\n",(j+1));
    printf("Informe o Peso (g): ");
    scanf("%f",&peso);
    peso_kg = peso/1000;

    printf("Informe o Preço (R$): ");
    scanf("%f", &preco);
    if(j==0){
      name_barato = j+1;
      mais_barato = preco/peso_kg;
    }
    else{
      if (preco/peso_kg <= mais_barato){
        name_barato = j+1;
        mais_barato = preco/peso_kg;
      }
    }
    somador_peso += peso;
    somador_preco += preco;
    printf("Preço unitário calculado = R$%.2f/kg\n", (preco/peso_kg));
  }
  printf("\nDados Finais da Compra:\n");
  printf("Produto mais barato: Doce %d\n",name_barato);
  printf("Foram comprados %.0fg de doce por R$%.2f", somador_peso, somador_preco);
  return 0;
}
