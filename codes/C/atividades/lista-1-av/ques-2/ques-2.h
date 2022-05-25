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

//recebe: o tanto de vezes que ele precisa verificar qual o mais barato, e uma struct doce para acessar seus atributos.
void maisBarato(int vezes,doce doces[vezes]);

