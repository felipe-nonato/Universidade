// functions

//recebe peso e preco do doce calcula o peso unitario
float precoUnitario(int peso, float preco);

//recebe: o tanto de vezes que ele precisa verificar qual o mais barato, o número do doce {doce 1, doce 2}, valor unitario corresponde {R$50,00}
void maisBarato(int vezes,int numero[vezes], float unitario[vezes]);

// structs
typedef struct {
  int numero;
  int peso;
  float preco;
  float preco_u;
}doce;
