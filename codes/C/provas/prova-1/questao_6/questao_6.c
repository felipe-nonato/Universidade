#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Assinaturas

/* 
Função: Retorna a maior palavra de um texto de até 200 caracteres;
Parametro: texto a ser analisado (char*);
Retorna: (char*) → maior palavra do texto;
*/
char *maiorPalavra(char* texto);

/* 
Função: Imprime histograma na tela.
Parametros: Titulo da coluna 1, Titulo da coluna 2, 
vetor com dados da coluna 1, vetor com dados da coluna 2;
Retorna: void;
*/
void histogramaFreq(char* palavra1,char* palavra2,char** classificacoes,  int* frequencia);

/*
Função: Classifica as palavras de uma string conforme o tamanho dela;
Parametro: String a ser classificada;
Retorno: Um vetor com 5 inteiros, conforme a seguinte regra:
> 1º elemento: número de palavras entre 0 e 3 caracteres;
> 2º elemento: número de palavras entre 3 e 6 caracteres;
> 3º elemento: número de palavras entre 6 e 9 caracteres;
> 4º elemento: número de palavras entre 9 e 12 caracteres;
> 5º elemento: número de palavras com mais de 12 caracteres;
*/
int* classifica(char* texto);

/* 
Função: Cria um vetor com as classificações do numero de palavras;
Parametro: Variavel que ira armazenar a classificação;
Retorna: void;
*/
void criaVetorClassificacao(char** classificacoes);

void histogramaPesquisa(char* texto);


// Main

int main()

{
    char *texto = (char*) calloc(200,sizeof(char));
    scanf("%[^\n]",texto);
    char* maior = maiorPalavra(texto);
    printf("\nMaior palavra: %s\n", maior);
    free(maior);

    char **classif = (char**)calloc(5,sizeof(char*));
    for (size_t i = 0; i < 5; i++)
    {
        classif[i] = (char*)calloc(100,sizeof(char));
    }

    int* freq = classifica(texto);
    criaVetorClassificacao(classif);
    histogramaFreq("Comprimento de Palavras","Frequencia",classif,freq);
    free(classif);
    free(freq);
    printf("\n\n");
    histogramaPesquisa(texto);
    printf("\n\n");

    free(texto);
    return 0;
}


// Funções

char *maiorPalavra(char* texto)
{
    int contadorDeLetras = 0;
    int numeroMaior = 0;
    char *palavraTeste = (char*)calloc(200,sizeof(char));
    char *maiorPalavra = (char*)calloc(200,sizeof(char));

    
    int j = 0;
    int i = 0;
    while(texto[i]!='\0')
    {
        if(texto[i]==' ')
        {
            if(numeroMaior<=contadorDeLetras)
            {
                strcpy(maiorPalavra,palavraTeste); 
                numeroMaior = contadorDeLetras;
            }

            for(size_t k = 0; k<strlen(palavraTeste);k++){ palavraTeste[k] = ' ';}
            contadorDeLetras = 0;
            j=0;
        }
        else
        {
            palavraTeste[j] = texto[i];
            contadorDeLetras++;
            j++;
        }
        i++;
    }
    if(texto[i]=='\0')
        {
            if(numeroMaior<=contadorDeLetras)
            {
                strcpy(maiorPalavra,palavraTeste); 
                numeroMaior = contadorDeLetras;
            }
            for(size_t k = 0; k<strlen(palavraTeste);k++){ palavraTeste[k] = ' ';}
            contadorDeLetras = 0;
            j=0;
        }
    free(palavraTeste);
    return maiorPalavra;
}

int* classifica(char* texto)
{
    int contadorDeLetras = 0;
    int* classificacao = (int*)calloc(5,sizeof(int));
    char *palavraTeste = (char*)calloc(200,sizeof(char));

    
    int j = 0;
    int i = 0;
    while(texto[i]!='\0')
    {
        if(texto[i]==' ')
        {
            if(contadorDeLetras>=0 && contadorDeLetras<3){classificacao[0]++;}
            else if(contadorDeLetras>=3 && contadorDeLetras<6){classificacao[1]++;}
            else if(contadorDeLetras>=6 && contadorDeLetras<9){classificacao[2]++;}
            else if(contadorDeLetras>=9 && contadorDeLetras<=12){classificacao[3]++;}
            else{classificacao[4]++;}
            
            for(size_t k = 0; k<strlen(palavraTeste);k++){ palavraTeste[k] = ' ';}
            contadorDeLetras = 0;
            j=0;
        }
        else
        {
            palavraTeste[j] = texto[i];
            contadorDeLetras++;
            j++;
        }
        i++;
    }
    if(texto[i]=='\0')
        {
            if(contadorDeLetras>=0 && contadorDeLetras<3){classificacao[0]++;}
            else if(contadorDeLetras>=3 && contadorDeLetras<6){classificacao[1]++;}
            else if(contadorDeLetras>=6 && contadorDeLetras<9){classificacao[2]++;}
            else if(contadorDeLetras>=9 && contadorDeLetras<=12){classificacao[3]++;}
            else{classificacao[4]++;}
        }
    free(palavraTeste);
    return classificacao;
}

void histogramaFreq(char* palavra1,char* palavra2,char** classificacoes, int* frequencia)
{
    printf("\n%s",palavra1);
    for (size_t i = 0; i < 35-strlen(palavra1); i++)
    {
        printf(" ");
    }
    
    printf("%s\n", palavra2);

    for (size_t i = 0; i < 5; i++)
    {
        classificacoes[i] = realloc(classificacoes[i],strlen(classificacoes[i])*sizeof(char));
        printf("%s",classificacoes[i]);
        for (size_t j = 0; j < 35-strlen(classificacoes[i]); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < frequencia[i]; k++)
        {
            printf("*");
        }
        printf("\n");
    }   
}

void criaVetorClassificacao(char** classificacoes)
{
    strcpy(classificacoes[0],"0--3");
    strcpy(classificacoes[1],"3--6");
    strcpy(classificacoes[2],"6--9");
    strcpy(classificacoes[3],"9--12");
    strcpy(classificacoes[4],"Maiores que 12");
}

void histogramaPesquisa(char* texto)
{
    // Alocando memoria das palavras
    char** palavraPesquisa = (char**)calloc(5,sizeof(char*));
    for (size_t i = 0; i < 5; i++)
    {
       palavraPesquisa[i] = (char*)calloc(100,sizeof(char));
    }

    // Recebendo as palavras
    printf("-----------------------------\n");
    printf("Pesquisa!!\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a %dº palavra:",i+1);
        scanf("%s",palavraPesquisa[i]);
        palavraPesquisa[i] = 
            realloc
                (palavraPesquisa[i],
                strlen(palavraPesquisa[i])*sizeof(char));
    }
    printf("-----------------------------\n");

    
    // Contando palavras da pesquisa

    int contadorDeLetras = 0;
    int* classificacao = (int*)calloc(5,sizeof(int));
    char *palavraTeste = (char*)calloc(200,sizeof(char));

    
    int j = 0;
    int i = 0;
    while(texto[i]!='\0')
    {
        if(texto[i]==' ')
        {
            for (size_t i = 0; i < 5; i++)
            {
                if(strcmp(palavraPesquisa[i],palavraTeste)==0){classificacao[i]++;}
            }
            
            
            for(size_t k = 0; k<strlen(palavraTeste);k++){ palavraTeste[k] = ' ';}
            contadorDeLetras = 0;
            j=0;
        }
        else
        {
            palavraTeste[j] = texto[i];
            contadorDeLetras++;
            j++;
        }
        i++;
    }
    if(texto[i]=='\0')
        {
            for (size_t i = 0; i < 5; i++)
            {
                if(strcmp(palavraPesquisa[i],palavraTeste)==0){classificacao[i]++;}
            }
        }
    free(palavraTeste);

    // Imprimindo Histograma
    char* palavra1 = "Palavra-Chave";
    char* palavra2 = "Ocorrências";
    printf("\n%s",palavra1);
    for (size_t i = 0; i < 35-strlen(palavra1); i++)
    {
        printf(" ");
    }
    
    printf("%s\n", palavra2);

    for (size_t i = 0; i < 5; i++)
    {
        printf("%s",palavraPesquisa[i]);
        for (size_t j = 0; j < 35-strlen(palavraPesquisa[i]); j++)
        {
            printf(" ");
        }
        printf("%d",classificacao[i]);
        printf("\n");
    }
}