struct Ponto {
    int x;
    int y;
};

typedef struct
{
    struct Ponto v1;
    struct Ponto v2;
}Tretangulo;


void recebe_retangulo(Tretangulo *retangulo);
void recebe_ponto(struct Ponto *ponto);
void dentro(Tretangulo retangulo,struct Ponto ponto);