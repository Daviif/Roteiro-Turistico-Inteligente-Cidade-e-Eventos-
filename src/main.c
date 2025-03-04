#include "./Funcoes/Arvore.c"
#include "./Funcoes/Cidades.c"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){

    srand(time(NULL));

   TCidades cidades[5];
   TArvore Arvore;
   Arvore.raiz = NULL;


   preencherCidades(cidades);
   for (int i = 0; i < 5; i++) {
        TItem novoItem;
        novoItem.cidade = cidades[i]; 
        Inserir(&Arvore.raiz, NULL, novoItem);
    }
    inOrdem(Arvore.raiz);
    
    return 0;
}