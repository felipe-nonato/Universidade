#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assinatura de função

/* 
Função: Recebe e guarda os dados da matriz.
Parametros: Numero de Linhas (que também é o numero de colunas), vetor.
Retorna: void.
*/
void recebeVetor(int l,int vetor[l][l]);

/* 
Função: Soma os elementos que estão abaixo da diagonal principal da matriz.
Parametros: Numero de Linhas (que também é o numero de colunas), matriz.
Retorna: A soma dos elementos abaixo da diagonal principal da matriz.
*/
int somaAbaixo(int l,int vetor[l][l]);

/* 
Função: Soma os elementos que estão acima da diagonal principal da matriz.
Parametros: Numero de Linhas (que também é o numero de colunas), matriz.
Retorna: A soma dos elementos acima da diagonal principal da matriz.
*/
int somaAcima(int l,int vetor[l][l]);

int main()
{   
    // Declaração de variaveis
    char posicao[6];
    int limiar;
    short int indice;
    int soma;

    // Recebendo variaveis

        // recebendo posição
            scanf("%s", posicao);
        // recebendo limiar
            scanf("%d",&limiar);
        //recebendo matriz;
            scanf("%hd", &indice);
            int vetor[indice][indice];
            recebeVetor(indice,vetor);
            
            
            
    
    //verificando se acima ou abaixo

        // Acima
            if (strcmp(posicao,"acima")==0)
            {
                soma = somaAcima(indice,vetor);
                // printf("\nteste acima\n");
            }
        
        // Abaixo
            else if(strcmp(posicao,"abaixo")==0)
            {
                soma = somaAbaixo(indice,vetor);
                // printf("\nteste abaixo\n");
            }

        // Tratamento de Erro
            else
            {
                printf("\nErro, digite um valor valido [acima ou abaixo]\n\n");
            }
        
        // Verificando se soma é maior que limiar
            if (soma>limiar)
                {
                    printf("Verdade");
                }
            else
                {
                    printf("Falso");
                }
    return 0;
}

// Funções

void recebeVetor(int l,int vetor[l][l])
{
    for(int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            scanf("%d",&vetor[i][j]);
        }
    }
}

int somaAcima(int l,int vetor[l][l])
{
    int soma = 0;
    for(int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if(j>i)
            {
                soma += vetor[i][j];
            }
        }
    }
    return soma;
}

int somaAbaixo(int l,int vetor[l][l])
{
    int soma = 0;
    for(int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if(j<i)
            {
                soma += vetor[i][j];
            }
        }
    }
    return soma;
}

void imprimeVetor(int l,int vetor[l][l])
{
    for(int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ",vetor[i][j]);
        }
        printf("\n");
    }
}
