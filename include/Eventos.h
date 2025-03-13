#ifndef EVENTOS_H
#define EVENTOS_H

typedef struct Eventos{
    char nomenclatura[100];
    float avaliacao;

} TEventos;

void Armazenar_Eventos(char *evento);

#endif 