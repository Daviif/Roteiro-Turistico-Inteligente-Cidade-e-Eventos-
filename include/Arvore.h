#ifndef _ARVORE_B
#define _ARVORE_B

#include "Cidades.h"

#include <stdio.h>
#include <stdlib.h>


typedef struct item{
    TCidades cidade;
}TItem;

typedef struct no{
    TItem item;
    struct no *pai;
    struct no *esq;
    struct no *dir;

} TNo;

typedef struct Arvore{
    TNo *raiz;
} TArvore;

void inOrdem(TNo *x);

void preOrdem(TNo *x);

void posOrdem(TNo *x);

TNo *Pesquisar(TNo *x, TItem Item);

void Inserir(TNo **x, TNo *pai, TItem Item);

TNo *criaNo(TItem Item);



#endif