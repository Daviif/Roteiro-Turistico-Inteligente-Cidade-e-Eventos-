#ifndef _ARVORE_B
#define _ARVORE_B
#define MAX_NOMEN 100
#define MAX_NOMENE 500
#define MAX_EV 3
#define MAX_CID 5

#include <stdio.h>
#include <stdlib.h>
typedef struct Eventos
{
    char nomenclatura[MAX_NOMENE];
    float avaliacao;
} TEventos;

typedef struct Cidades
{
    char nome[MAX_NOMEN];
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



#endif