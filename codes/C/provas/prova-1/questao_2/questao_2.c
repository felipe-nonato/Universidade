#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ASSINATURAS

/* 
Troca uma letra por outra.
Parametros: string com nome a fazer a troca; char antigo; char novo;
Retorno: Vazio, imprime na tela a nova string, com os caracteres trocados;
*/
void troca_letra (char *str, char original, char novo);


// FUNÇÃO MAIN
int main()
{
    troca_letra("Estruturas",'t','d');
    troca_letra("Driculi",'i','a');
    return 0;
}

// FUNÇÃO CRIADA

void troca_letra (char *str, char original, char novo)
{
    char* palavraNova = (char*)calloc(strlen(str)+1, sizeof(char));
    for(size_t i = 0; i<=strlen(str);i++)
    {
        if(str[i]==original)
        {
            palavraNova[i] = novo;
        }
        else
        {
            palavraNova[i] = str[i];
        }
    }
    printf("%s\n\n", palavraNova);
}