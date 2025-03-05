#include "../../include/Ordenacao.h"
#include "../../include/Arvore.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void BubbleSort(TCidades cidades[]){
    TCidades aux;
    for (int i = 0; i < 5 - 1; i++){
        for (int j = 0; j < 5 - i - 1; j++){
            if (cidades[j].eventos[j].avaliacao < cidades[j + 1].eventos[0].avaliacao){
                aux = cidades[j];
                cidades[j] = cidades[j + 1];
                cidades[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        printf("\nCidade: %s\n", cidades[i].nome);
        printf("Eventos: \n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %s - Nota: %.1f\n", cidades[i].eventos[j].nomenclatura, cidades[i].eventos[j].avaliacao);
        }
        
    }
}

void SelectionSort(TCidades cidades[]){
    TCidades aux;
    for (int i = 0; i < 5; i++){
        int menor = i;
        for (int j = i + 1; j < 5; j++){
            if (cidades[j].eventos[0].avaliacao > cidades[menor].eventos[0].avaliacao){
                menor = j;
            }
        }
        aux = cidades[i];
        cidades[i] = cidades[menor];
        cidades[menor] = aux;
    }

    for (int i = 0; i < 5; i++){
        printf("Cidade: %s\nEventos: %s - Nota: %.1f.\n\n", cidades[i].nome, cidades[i].eventos[0].nomenclatura, cidades[i].eventos[0].avaliacao);
    }
}

void InsertionSort(TCidades cidades[]){
    TCidades aux;
    int j;
    for (int i = 1; i < 5; i++){
        aux = cidades[i];
        j = i - 1;
        while (j >= 0 && cidades[j].eventos[0].avaliacao < aux.eventos[0].avaliacao){
            cidades[j + 1] = cidades[j];
            j--;
        }
        cidades[j + 1] = aux;
    }

    for (int i = 0; i < 5; i++){
        printf("Cidade: %s\nEventos: %s - Nota: %.1f.\n\n", cidades[i].nome, cidades[i].eventos[0].nomenclatura, cidades[i].eventos[0].avaliacao);
    }
}

void ShellSort(TCidades cidades[]){

}

void QuickSort(TCidades cidades[]){

}

void MergeSort(TCidades cidades[]){

}

void HeapSort(TCidades cidades[]){

}