#include "pilhaenc.h"

int main()
{
    TPilhaEnc pilha;
    criarPilha(&pilha);
    for (int i = 1; i < 7; i++)
    {
        empilhar(&pilha,i);
    }
    
    imprimir(pilha);
    desempilharN(&pilha, 2);
    imprimir(pilha);
    return 0;
}
