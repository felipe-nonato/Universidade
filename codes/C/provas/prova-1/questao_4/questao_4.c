#include <string.h>
#include <stdlib.h>
#include <stdio.h>
// ASSINATURAS

/* 
Inverte uma string.
Parametros: frase a ser invertida, variavel para guardar frase invertida;
Retorno: Vazio, imprime na tela a frase invertida;
*/
void inverte(char *frase, char *ifrase);

/* 
Inverte uma string.
Parametros: frase a ser invertida;
Retorno: string - frase invertida;
*/
char *inverte2(char *frase);


// FUNÇÃO MAIN
int main()
{

    char* frase = (char*)calloc(100,sizeof(char));
    printf("Frase digitada: ");
    scanf("%[^\n]",frase);
    int tamanhoFrase = (int)strlen(frase);
    frase = realloc(frase,tamanhoFrase+1);
    char* ifrase = (char*)calloc(tamanhoFrase+1,sizeof(char));
    inverte(frase,ifrase);
    printf("\n[função 1] Saída na tela: %s\n\n", ifrase);
    printf("[função 2] Saída na tela: %s\n\n",inverte2(frase));
    free(frase);
    free(ifrase);
    return 0;
}

// FUNÇÕES CRIADAS

void inverte(char *frase, char *ifrase)
{
    int tamanhoFrase = (int)strlen(frase);
    int j = tamanhoFrase-1;
    for(int i = 0; i<=tamanhoFrase;i++)
    {   
        ifrase[i] = frase[j];
        j--;
    }
}

char *inverte2(char *frase)
{
    int tamanhoFrase = (int)strlen(frase);
    char* ifrase = calloc(tamanhoFrase+1,sizeof(char));
    int j = tamanhoFrase-1;
    for(int i = 0; i<=tamanhoFrase;i++)
    {   
        ifrase[i] = frase[j];
        j--;
    }
    return ifrase;
}