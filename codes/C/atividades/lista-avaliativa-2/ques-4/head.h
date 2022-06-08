// Structs

typedef struct
{
   char *titulo;
   char *autor;
   float preco; 
}Livro;


// -----------


// Functions()

void adicionarLivros(int vezes, Livro livros[]);
void imprimirVetor(int vezes, Livro livros[]);
char *receberString();
float receberPreco();