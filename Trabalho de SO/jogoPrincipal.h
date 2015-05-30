//
//  jogoPrincipal.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef Trabalho_de_SO_jogoPrincipal_h
#define Trabalho_de_SO_jogoPrincipal_h
#define TAM 256

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct monstro{
    int ID;
    int tipo;
    int presente;
}monstro;

typedef struct sala{
    int ID;
    char desc[TAM];
    char killFeed[TAM];
    char sucessFeed[TAM];
    char comandosValidos[TAM];
    char tagsEfeito[TAM];
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
