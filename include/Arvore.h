#ifndef _ARVORE_B
#define _ARVORE_B

#include <stdio.h>
#include <stdlib.h>

typedef struct item{
    int chave;  
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



#endif