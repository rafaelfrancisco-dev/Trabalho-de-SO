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

typedef struct sala{
    int ID;
    char* desc;
    char* tagsEfeito[NUM_TAGS];
    struct sala *next;
}sala;

typedef struct dungeon{
    int num_salas;
    sala salas[];
}dungeon;

void comecarJogo();

#endif
