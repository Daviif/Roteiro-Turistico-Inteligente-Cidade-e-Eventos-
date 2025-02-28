#include "../include/Cidades.h"

#include <stdio.h>
#include <stdlib.h>

char Armarzenar_Cidades(){
    char *cidades[] =   { "São Paulo", "Rio de Janeiro", "Belo Horizonte", "Brasília", "Salvador",
        "Curitiba", "Fortaleza", "Recife", "Porto Alegre", "Manaus", "Belém", "Goiânia", "Florianópolis", 
        "Vitória", "Cuiabá", "João Pessoa", "Teresina", "Natal", "Aracaju", "Maceió", "Porto Velho", 
        "Rio Branco", "Macapá", "Boa Vista", "Palmas", "Paris", "Londres", "Nova York", "Tóquio", "Pequim",
        "Sydney", "Cidade do México", "Toronto", "Barcelona", "Roma", "Amsterdã", "Berlim", "Viena", "Praga", 
        "Lisboa", "Marrocos", "Barão de Cocais", "Santa Barbara", "Ouro Preto", "Mariana", "Pedra Azul", 
        "Volta Redonda", "Juiz de Fora", "Niteroi", "Carandai", "Ohio", "Chigago", "Florida"};

    int numCidades = sizeof(cidades) / sizeof(cidades[0]);

    int indice_cidade = rand () % numCidades;

    return cidades[indice_cidade];
}