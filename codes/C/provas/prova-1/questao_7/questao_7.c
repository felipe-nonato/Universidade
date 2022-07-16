#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Assinaturas
/*
Função: Calcula a media de um conjunto de dados;
Parametros: Conjunto de dados, Número de dados;
Retorna: double → media;
*/
double media(double *v, int n);

/* 
Função: Calcula o desvio padrão de um conjunto de dados;
Parametros: Conjunto de dados, Número de dados;
Retorna: double → desvio padrão;
*/
double desviopadrao(double *v, int n);

int main()
{
    int n;
    printf("Digite quantos dados serão passados: ");
    scanf("%d",&n);
    printf("Digite os dados: ");
    double* dados = (double*)calloc(n,sizeof(double));
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &dados[i]);
    }
    printf("%.2lf\n",desviopadrao(dados,n));
    free(dados);
    return 0;
}

double desviopadrao(double *v, int n)
{
    // double* desvio = (double*)calloc(n,sizeof(double));
    double med = media(v,n);
    double variancia = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>med)
        {
            variancia += pow(v[i]-media(v,n),2);
        }
        else
        {
             variancia += pow(media(v,n)-v[i],2);
        }
    }
    variancia /= n-1;
    return sqrt(variancia);
    
}

double media(double *v, int n)
{
    double somatorio = 0;
    for (int i = 0; i < n; i++)
    {
        somatorio += v[i];
    }
    return somatorio/n;
    
}