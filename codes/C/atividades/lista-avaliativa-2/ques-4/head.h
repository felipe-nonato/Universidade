// Structs

//estrutura que armazena os dados dos livros
typedef struct
{
   char titulo[51];
   char autor[51];
   float preco; 
}Livro;


// --------------------------------------------------------------------------------


// Functions()

//Recebe o numero de livros e um vetor que recebera esses livros, e retorna o vetor recebido preenchido com os livros
void adicionarLivros(int vezes, Livro livros[vezes]);
//Recebe o numero de livros e um vetor com os livros, e retorna a media dos preços.
void mediaPreco(int vezes, Livro livros[vezes]);
//Recebe o numero de livros e um vetor com os livros, e imprime o vetor mostrando os livros.
void imprimirVetor(int vezes, Livro livros[vezes]);