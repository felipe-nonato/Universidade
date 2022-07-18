#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// structs

typedef struct
{
    float x;
    float y;
}Ponto;

typedef struct
{
    char* nome;
    Ponto centro;
    float raio;
}Circulo;


// assinaturas

/* 
Função: Cria um circulo;
Parametros: Nome do circulo, coordenadas (x,y) do ponto centro, e o raio;
Retorna: Um ponteiro do tipo Circulo;
*/
Circulo* criaCirculo(char* nome, float x, float y, float raio);

/* 
Função: Verifica se c1 contém c2;
Parametros: c1 e c2;
Retorna: 0 se c1 não contem c2, e diferente de 0 se c1 contem c2;
*/
int contem(Circulo* c1, Circulo* c2);

int main()
{
    Circulo * c1, * c2, * c3;
    c1 = criaCirculo( "Circulo01", 3.0,4.0,2.0);
    c2 = criaCirculo("Circulo02", 3.0,3.0,1.0);
    c3 = criaCirculo("Circulo03", 1.0,5.0,1.0);
    printf("%d\n", contem (c1, c2));
    printf("%d\n", contem (c1, c3));
    free(c1);
    free(c2);
    free(c3);
    return 0;
}

Circulo* criaCirculo(char* nome, float x, float y, float raio)
{
    Circulo* c = malloc(sizeof(Circulo));
    c->nome = (char*)calloc(strlen(nome),sizeof(char));
    strcpy(c->nome,nome);
    c->centro.x = x;
    c->centro.y = y;
    c->raio = raio;
    return(c);
}

int contem(Circulo* c1, Circulo* c2)
{
    float distancia = sqrt(pow(c2->centro.x-c1->centro.x,2)+pow(c2->centro.y-c1->centro.y,2));
    if ((distancia+c2->raio) <= c1->raio)
    {
        return !0;
    }
    else
    {
        return 0;
    }
    
}