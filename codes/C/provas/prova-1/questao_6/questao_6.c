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

int main()

{
    char *texto = (char*) calloc(200,sizeof(char));
    scanf("%[^\n]",texto);
    char* maior = maiorPalavra(texto);
    printf("\n%s\n", maior);
    free(maior);



    free(texto);


    /* for(int i = 0;i<5;i++)
    {
        strcat(teste,"+");
    }
    printf("%s\n",teste); */
    return 0;
}


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
