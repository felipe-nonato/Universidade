#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void troca_letra (char* str, char original, char novo);

void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main(){
    char* parametro = (char*)calloc(10,sizeof(char));
    char caract1, caract2;
    scanf("%s", parametro);
    flush_in();
    scanf("%c", &caract1);
    flush_in();
    scanf("%c", &caract2);

    troca_letra(parametro, caract1, caract2);
    printf("\n");
    return 0;
}

void troca_letra (char* str, char original, char novo){  
    char* palavraFinal = (char*)calloc(strlen(str),sizeof(char));
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == original)
        {
            palavraFinal[i] = novo;
        }
        else
        {
            palavraFinal[i] = str[i];
        }
    }
    printf("%s", palavraFinal);
    free(palavraFinal);
}