//
//  jogoPrincipal.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef Trabalho_de_SO_jogoPrincipal_h
#define Trabalho_de_SO_jogoPrincipal_h

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "io.h"
#include "utils.h"
#include "correrJogo.h"

#define MAX_BUF 512

typedef struct motorJogo{
    dungeon masmorra;
}motorJogo;

void comecarJogo();

dungeon fazerDungeon(sala *salas);

void alocarMonstro(dungeon masmorra);

void jogo();

void ligarServer();

int enviarDados(dungeon m);

int verRole();

void adminJogo();

#endif
