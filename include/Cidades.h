#ifndef _CiDADES
#define _CIDADES

#include <stdio.h>
#include <stdlib.h>


#include "Eventos.h"

typedef struct {
    char nome[100];
    TEventos eventos[3];
} TCidades;



void Armazenar_Cidades(char *cidade);


#endif