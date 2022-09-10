#include <stdlib.h>
#include <stdio.h>

// Assinatura da função

/* 
Função: Cria um vetor resultado da união de dois outros vetores;
Parametros: vetor 1, tamanho do vetor 1, vetor 2, tamanho do vetor 2;
Retorna: int → Um ponteiro que aponta para o primeiro elemento do vetor resultante da união.
*/
int* uniao(int *v1, int n1, int *v2, int n2);

int main()
{
    // vetor 1
    int tamanhoVetor1;
    printf("Tamanho do primeiro vetor: ");
    scanf("%d",&tamanhoVetor1);
    int* p1 = (int*)calloc(tamanhoVetor1,sizeof(int));
    printf("dados do primeiro vetor: \n");
    for(int i = 0;i<tamanhoVetor1;i++)
    {
        scanf("%d", &p1[i]);
    }

    printf("\n\n");

    // vetor 2
    int tamanhoVetor2;
    printf("Tamanho do segundo vetor: ");
    scanf("%d",&tamanhoVetor2);
    int* p2 = (int*)calloc(tamanhoVetor2,sizeof(int));
    printf("dados do segundo vetor: \n");
    for(int i = 0;i<tamanhoVetor2;i++)
    {
        scanf("%d", &p2[i]);
    }

    // Calculando união dos dois vetores
    int* uni = uniao(p1,tamanhoVetor1,p2,tamanhoVetor2);
    free(p1);
    free(p2);
    printf("Vetor resultante da união: ");
    for(int i = 0;i<tamanhoVetor1+tamanhoVetor2;i++)
    {
        if (i == tamanhoVetor1+tamanhoVetor2-1)
        {
            printf("%d\n", uni[i]);
        }
        else
        {
            printf("%d ", uni[i]);
        }
    }
    free(uni);
    return 0;
}

int* uniao(int *v1, int n1, int *v2, int n2)
{
    int* uni = (int*)calloc((n1+n2),sizeof(int));
    for(int i = 0;i<n1;i++)
    {
        uni[i] = v1[i];
    }
    for(int i = n1, j = 0;i<n1+n2;i++,j++)
    {
        uni[i] = v2[j];
    }
    return uni;
}