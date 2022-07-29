#include "listaenc.h"
#include <stdio.h>
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
    removerPrimeiro(&lista);
    imprimir(lista);

    modificar(&lista, 1, 60);
    removerUltimo(&lista);
    imprimir(lista);



    return 0;
}
