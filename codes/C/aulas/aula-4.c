#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* duplica (char* strOriginal);

int main()
{
    char* nome[41];
    puts("Escreva uma string (até 40 caracteres)\n");
    scanf(" %40[^\n]s",nome);
    char* s = duplica(nome);
    printf("%ld",strlen(s));
    return 0;
}

char* duplica (char* strOriginal){
    const int tamanhoString = strlen(strOriginal);
    if (strOriginal==NULL || tamanhoString == 0 ) return NULL;
    char* clone = (char*) malloc((1+tamanhoString)*sizeof(char));
    if(clone == NULL) return NULL;
    strcpy(clone, strOriginal);
    return clone;
}
