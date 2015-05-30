//
//  serverEngine.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 30/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef __Trabalho_de_SO__serverEngine__
#define __Trabalho_de_SO__serverEngine__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <sys/stat.h>
#include "struct_defs.h"

typedef struct cliente{
    int ID;
    char nome[256];
    dungeon masmorra;
    struct cliente *next;
}cliente;

void startServer();
void addCliente();

#endif /* defined(__Trabalho_de_SO__serverEngine__) */
