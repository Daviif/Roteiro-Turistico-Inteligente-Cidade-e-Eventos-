#ifndef EVENTOS_H
#define EVENTOS_H

typedef struct Eventos{
    char nomeclatura[100]; 
    float avaliacao;

} TEventos;

void Armazenar_Eventos(char *evento);

#endif 