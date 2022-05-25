// structs
typedef struct {
  int numero;
  int peso;
  float preco;
  float preco_u;
}doce;


//----------------------------- functions -----------------------------

//recebe peso e preco do doce calcula o peso unitario
float precoUnitario(int peso, float preco);

//recebe: quantos doces tem, e uma struct doce para acessar seus atributos. Retorna: void, printando na tela qual mais barato.
void maisBarato(int vezes,doce doces[0]);

//recebe: quantos doces tem, e uma struct doce para acessar seus atributos. Retorna: um int (peso total dos doces).
int pesoTotal(int vezes,doce doces[0]);

//recebe: quantos doces tem, e uma struct doce para acessar seus atributos. Retorna: um float (total gasto).
float gastoTotal(int vezes,doce doces[0]);

