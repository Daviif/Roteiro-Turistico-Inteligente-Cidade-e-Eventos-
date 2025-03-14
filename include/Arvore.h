#ifndef _ARVORE_B
#define _ARVORE_B

#define MAX_CID 5
#define MAX_EV 3

#include "Eventos.h"

typedef struct cidade{
    char nome[100];
    TEventos eventos[MAX_EV];
} TCidades;


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

void preencherCidades(TCidades cidades[]);

#endif