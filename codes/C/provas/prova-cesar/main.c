#include "listaenc.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* criando lista com um elemento [Funções do Professor] */
    TListaEnc lista;
    criarLista(&lista);
    inserirElemento(&lista,1,5);
    imprimir(lista);

    /* testando minhas funções */
    inserirPrimeiro(&lista,3);
    inserirUltimo(&lista,15);
    imprimir(lista);



    return 0;
}
