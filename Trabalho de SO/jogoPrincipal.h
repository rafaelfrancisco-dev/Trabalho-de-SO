//
//  jogoPrincipal.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef Trabalho_de_SO_jogoPrincipal_h
#define Trabalho_de_SO_jogoPrincipal_h
#define NUM_TAGS 10

#include <stdio.h>
#include <stdlib.h>

typedef struct monstro{
    int ID;
    int tipo;
    int presente;
}monstro;

typedef struct sala{
    int ID;
    char* desc;
    char* killFeed;
    char* sucessFeed;
    char* comandosValidos;
    char* tagsEfeito[NUM_TAGS];
    monstro m;
    struct sala *next;
}sala;

typedef struct dungeon{
    int num_salas;
    sala salas[];
}dungeon;

sala * carregarDados();
void comecarJogo();

#endif
