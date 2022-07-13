/* 
-------------------------------------
ATENÇÃO: 

FOI PRECISO TROCAR O NOME DA FUNÇÃO 
PARA REMOVER(), POIS JÁ EXISTE UMA
FUNÇÃO NA LINGUAGEM "C" COM NOME 
REMOVE, E ERA IMPOSSIVEL RODAR POR
CAUSAR CONFLITO DE NOME DE FUNÇÕES 
-------------------------------------
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
// ASSINATURAS

/* 
Função: Remove uma letra.
Parametros: frase para remover caracter; posição do caracter a ser removido;
Retorna: Vazio, imprime na tela a nova string, sem o caracter selecionado;
*/
void remover(char* frase, int pos);


// FUNÇÃO MAIN
int main()
{
    remover("Estrutura",1);
    remover("Luis Felipe",5);
    return 0;
}

// FUNÇÃO CRIADA

void remover(char* frase, int pos)
{
    int tamanhoFrase = (int)strlen(frase)+1;
    char* palavraNova = (char*)calloc(tamanhoFrase, sizeof(char));
    int j = 0;
    for(int i = 0; i<tamanhoFrase;i++)
    {   
        if(i != pos)
        {
            palavraNova[j] = frase[i];
            j++;
        }
    }
    printf("%s\n\n", palavraNova);
    free(palavraNova);
}