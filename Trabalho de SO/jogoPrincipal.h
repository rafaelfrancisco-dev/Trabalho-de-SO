//
//  jogoPrincipal.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef Trabalho_de_SO_jogoPrincipal_h
#define Trabalho_de_SO_jogoPrincipal_h

#include "io.h"
#include "utils.h"

typedef struct motorJogo{
    dungeon masmorra;
}motorJogo;

void comecarJogo();

dungeon fazerDungeon(sala *salas);

void alocarMonstro(dungeon masmorra);

void jogo();

#endif
