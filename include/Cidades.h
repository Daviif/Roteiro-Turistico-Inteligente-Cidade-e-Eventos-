#ifndef _CiDADES
#define _CIDADES

#define MAX_NOMEN 100
#define MAX_NOMENE 500

#include <stdio.h>
#include <stdlib.h>

typedef struct Cidades
{
    char nome[MAX_NOMEN];
    char eventos[MAX_NOMENE];
};

char Armarzenar_Cidades();

#endif