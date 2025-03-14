#include "../../include/Ordenacao.h"
#include "../../include/Arvore.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 5


void BubbleSort(TCidades *cidades){
    TCidades aux;
    for (int i = 0; i < MAX - 1; i++){
        for (int j = 0; j < MAX - i - 1; j++){
            if (cidades[j].eventos[j].avaliacao < cidades[j + 1].eventos[0].avaliacao){
                aux = cidades[j];
                cidades[j] = cidades[j + 1];
                cidades[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < MAX; i++){
        printf("\nCidade: %s\n", cidades[i].nome);
        printf("Eventos: \n");
        for (int j = 0; j < MAX_EV; j++)
        {
            printf(" %s - Nota: %.1f\n", cidades[i].eventos[j].nomeclatura, cidades[i].eventos[j].avaliacao);
        }
    }
}

void SelectionSort(TCidades cidades[]){
    TCidades aux;
    for (int i = 0; i < MAX; i++){
        int menor = i;
        for (int j = i + 1; j < MAX; j++){
            if (cidades[j].eventos[0].avaliacao > cidades[menor].eventos[0].avaliacao){
                menor = j;
            }
        }
        aux = cidades[i];
        cidades[i] = cidades[menor];
        cidades[menor] = aux;
    }

    for (int i = 0; i < MAX; i++){
        printf("Cidade: %s\nEventos: %s - Nota: %.1f.\n\n", cidades[i].nome, cidades[i].eventos[0].nomeclatura, cidades[i].eventos[0].avaliacao);
    }
}

void InsertionSort(TCidades cidades[]){
    TCidades aux;
    int j;
    for (int i = 1; i < MAX; i++){
        aux = cidades[i];
        j = i - 1;
        while (j >= 0 && cidades[j].eventos[0].avaliacao < aux.eventos[0].avaliacao){
            cidades[j + 1] = cidades[j];
            j--;
        }
        cidades[j + 1] = aux;
    }

    for (int i = 0; i < MAX; i++){
        printf("Cidade: %s\nEventos: %s - Nota: %.1f.\n\n", cidades[i].nome, cidades[i].eventos[0].nomeclatura, cidades[i].eventos[0].avaliacao);
    }
}

void ShellSort(TCidades cidades[]){

    for (int intervalo = MAX/2 ; intervalo > 0; intervalo /= 2){
        for (int i = intervalo; i < MAX; i++){
            TCidades temp = cidades[i];
            int j;
            for (j = i; j >= intervalo && cidades[j - intervalo].eventos[0].avaliacao < temp.eventos[0].avaliacao; j -= intervalo){
                cidades[j] = cidades[j - intervalo];
            }
            cidades[j] = temp;
        }
    }
    
    for (int i = 0; i < MAX; i++){
        printf("Cidade: %s\nEventos: %s - Nota: %.1f.\n\n", cidades[i].nome, cidades[i].eventos[0].nomeclatura, cidades[i].eventos[0].avaliacao);
    }
    
}

void trocar(TCidades* a, TCidades* b) {
    TCidades temp = *a;
    *a = *b;
    *b = temp;
}

int Particao(TCidades cidades[]){

    TCidades *pivo = &cidades[MAX - 1];
    TCidades *i = &cidades[-1];

    for (TCidades *j = i+1; j < pivo; j++){
        if (j -> eventos -> avaliacao <= pivo -> eventos -> avaliacao){
            i++;
            trocar(i, j);
        }
    }
    trocar(i + 1, pivo);
    pivo = i + 1;
    
}
void QuickSort(TCidades cidades[]){
    TCidades *pivo = &cidades[MAX - 1];
    TCidades *i = &cidades[-1];

    if (i < pivo){
        int p = Particao(cidades);
        QuickSort(cidades);
        QuickSort(cidades + p + 1);
    }
    
    for (int i = 0; i < MAX; i++){
        printf("Cidade: %s\nEventos: %s - Nota: %.1f.\n\n", cidades[i].nome, cidades[i].eventos[0].nomeclatura, cidades[i].eventos[0].avaliacao);
    }


}

/*void MergeSort(TCidades cidades[]){

}

void HeapSort(TCidades cidades[]){
    TCidades aux;

}*/