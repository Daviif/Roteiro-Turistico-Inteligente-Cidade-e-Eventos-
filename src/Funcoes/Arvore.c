#include "../include/Arvore.h"

#include <stdio.h>
#include <stdlib.h>

void inOrdem(TNo *x){
    if (x != NULL){
        inOrdem(x -> esq);
        printf("%d ",x -> item.chave);
        inOrdem(x -> dir);
    }
}

void preOrdem(TNo *x){
    if (x != NULL){
        printf("%d ", x -> item.chave);
        preOrdem(x -> esq);
        preOrdem(x -> dir);
    }
}

void posOrdem(TNo *x){
    if (x != NULL){
        posOrdem(x -> esq);
        posOrdem(x -> dir);
        printf("%d ", x -> item.chave);
    }
}

TNo *Pesquisar(TNo *x, TItem Item){
    if((x == NULL) || (x -> item.chave == Item.chave)){
        return x;
    }

    if(Item.chave < x -> item.chave){
        return Pesquisar(x -> esq, Item);
    }
    else if(Item.chave > x -> item.chave){
        return Pesquisar(x -> dir, Item);
    }
}