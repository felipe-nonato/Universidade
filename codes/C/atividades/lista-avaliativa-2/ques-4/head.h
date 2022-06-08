// Structs

typedef struct
{
   char *titulo;
   char *autor;
   float preco; 
}Livro;


// -----------


// Functions()

void adicionarLivros(unsigned short int vezes, Livro livros[vezes]);
char *receberString();
float receberPreco();