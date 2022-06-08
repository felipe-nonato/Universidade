// Structs

typedef struct
{
   char *titulo;
   char *autor;
   float preco; 
}Livro;


// --------------------------------------------------------------------------------


// Functions()

void adicionarLivros(int vezes, Livro livros[vezes]);
void mediaPreco(int vezes, Livro livros[vezes]);
void imprimirVetor(int vezes, Livro livros[vezes]);