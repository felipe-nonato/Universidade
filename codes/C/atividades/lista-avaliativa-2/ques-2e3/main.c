#include "head.h"
#include <stdio.h>

int main()
{
    struct Ponto ponto;
    Tretangulo retangulo;
    recebe_retangulo(&retangulo);
    recebe_ponto(&ponto);
    dentro(retangulo,ponto);
    return 0;
}


