#include "../../include/Cidades.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void Armazenar_Cidades(char *cidade){
    char *cidades[] =   { "Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Brasilia", "Salvador",
        "Curitiba", "Fortaleza", "Recife", "Porto Alegre", "Manaus", "Belem", "Goiania", "Florianopolis", 
        "Vitoria", "Cuiaba", "Joao Pessoa", "Teresina", "Natal", "Aracaju", "Maceio", "Porto Velho", 
        "Rio Branco", "Macapa", "Boa Vista", "Palmas", "Paris", "Londres", "Nova York", "Toquio", "Pequim",
        "Sydney", "Cidade do Mexico", "Toronto", "Barcelona", "Roma", "Amsterda", "Berlim", "Viena", "Praga", 
        "Lisboa"};

    int numCidades = sizeof(cidades) / sizeof(cidades[0]);

    strcpy(cidade, cidades[rand() % numCidades]);

}


void preencherCidades(TCidades cidades[]){
    for (int i = 0; i < 5; i++) {
        Armazenar_Cidades(cidades[i].nome);  

        for(int j = 0; j < 5; j++){
            if(strcmp(cidades[i].nome, cidades[j].nome) == 0){

                Armazenar_Cidades(cidades[i].nome);
                j = -1; 
            }
        }
        
        
        for (int j = 0; j < 3; j++) {
            Armazenar_Eventos(cidades[i].eventos[j].nomenclatura);  
            cidades[i].eventos[j].avaliacao = (rand() % 101) / 10.0; 
        }
    }
}

