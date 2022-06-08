// structs
typedef struct{
    int x;
    int y;
}Ponto;

// functions
//Recebe dois pontos e retorna a distancia entre eles
void recebePontos(Ponto *p1, Ponto *p2);
float distancia(Ponto p1, Ponto p2);
float distanciaNova( Ponto *p1, Ponto *p2 );