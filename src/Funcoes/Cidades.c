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


void Armazenar_Eventos(char *evento){
    char *eventos[] = {
        "Show de Rock", "Festa Junina", "Corrida de Rua", "Feira de Tecnologia", "Campeonato de Xadrez",
        "Festival de Cinema", "Teatro ao Ar Livre", "Palestra Motivacional", "Workshop de Fotografia", "Hackathon",
        "Concerto de Orquestra", "Aula de Yoga", "Lançamento de Livro", "Campeonato de Futebol", "Maratona de Programação",
        "Feira de Empregos", "Stand-up Comedy", "Exposição de Arte", "Aula de Culinária", "Competição de Robótica",
        "Show de Stand-up", "Corrida de Bicicleta", "Feira de Games", "Palestra sobre Inteligência Artificial", "Show de Mágica",
        "Competição de Dança", "Workshop de Pintura", "Festival de Gastronomia", "Treinamento Empresarial", "Conferência de Ciência",
        "Campeonato de E-Sports", "Feira de Quadrinhos", "Palestra sobre Sustentabilidade", "Feira de Antiguidades", "Desafio de Startups",
        "Festival de Música", "Evento de Networking", "Palestra sobre Saúde Mental", "Corrida de Obstáculos", "Exibição de Documentários",
        "Sarau Literário", "Competição de Canto", "Feira de Empreendedorismo", "Aula de Defesa Pessoal", "Festival de Dança",
        "Desafio de Matemática", "Treinamento de Liderança", "Festival de Cultura Pop", "Aula de Meditação", "Batalha de Bandas",
        "Competição de Cosplay", "Feira de Automóveis", "Corrida de Drones", "Festival de Jazz", "Competição de Memória",
        "Feira de Vinhos", "Palestra sobre Astronomia", "Competição de Programação", "Exposição de Fotografia", "Simulação de Bolsa de Valores"
    };
    int numEventos = sizeof(eventos) / sizeof(eventos[0]);
    
    strcpy(evento, eventos[rand() % numEventos]);
}

void preencherCidades(TCidades cidades[]){
    for (int i = 0; i < 5; i++) {
        Armazenar_Cidades(cidades[i].nome);  
        
        for (int j = 0; j < 2; j++) {
            Armazenar_Eventos(cidades[i].eventos[j].nomenclatura);  
            cidades[i].eventos[j].avaliacao = (rand() % 101) / 10.0; 
        }
    }
}

