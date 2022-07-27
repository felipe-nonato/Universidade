/*****************************************************************************
 * Instituto Federal de Educação Ciência e Tecnologia da Paraíba			 
 * Campus Campina Grande													 
 * Curso Superior em Engenharia da Computação								 
 * Professor: Cesar Vasconcelos												 
 * 																			 
 * Copyright - Cesar Vasconcelos											 
 * Este marerial foi elaborado apenas para ser utilizado pelos alunos da 	 
 * disciplina Estruturas de Dados, do curso de Eng. da Computação do IFPB.	 
 * 																			 
 * Nenhuma parte deste material pode ser reproduzida ou transmitida			 
 * de qualquer modo ou por qualquer meio sem prévia autorização do 			 
 * autor e sem lhe ser dado o devido crédito.								 
 * **************************************************************************/


//*************** Implementação da área de dados do TAD ***************//


typedef struct nolista {
	int dado;              // campo que guarda a informação
    struct nolista *prox;  // guarda o endereço para o próximo nó da lista
}no;


typedef no* TListaEnc; // como um ponteiro para um nó da lista será chamado


//*************** A interface de uso do TAD Lista Encadeada - Cesar Vasconcelos ***********//

/* Letra [A] */
/* Criar uma lista encadeada vazia */
void criarLista( TListaEnc *lista );

/* Letra [B] */
/* Verificar se a lista está vazia ou não */
int listaVazia( TListaEnc lista );

/* Letra [C] */
/* Verificar a quantidade de elementos na lista */
int tamanhoLista( TListaEnc lista );

/* Letra [D] */
/* Buscar um elemento mediante sua posição dentro da lista */
int elementoNaPosicao( TListaEnc lista, int posicao, int* dado );

/* Letra [E] */
/* Buscar a posição de um elemento na lista */
int posicaoDoElemento( TListaEnc lista, int elemento );

/* Letra [F] */
/* Inserir um elemento na lista mediante sua posição */
int inserirElemento( TListaEnc* lista, int posicao, int elemento );

/* Letra [G] */
/* Remover um elemento da lista mediante sua posição */
int removerElemento( TListaEnc* lista, int posicao, int *dado );

/* Função de Imprimir */
/* Exibir todos os elementos da lista */
void imprimir ( TListaEnc lista ); 

//*************** A interface de uso do TAD Lista Encadeada - Luís Felipe Ferreira ***********//

/* Letra [H] */
int inserirPrimeiro( TListaEnc* lista, int elemento );

/* Letra [I]*/
int inserirUltimo( TListaEnc* lista, int elemento );