#ifndef _ORDENACAO
#define _ORDENACAO

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void BubbleSort(TCidades cidades[]);

void SelectionSort(TCidades cidades[]);

void InsertionSort(TCidades cidades[]);

void ShellSort(TCidades cidades[]);

void QuickSort(TCidades cidades[]);

void MergeSort(TCidades cidades[]);

void HeapSort(TCidades cidades[]);

void trocar(TCidades* a, TCidades* b);

void Particao(TCidades cidades[]);

#endif