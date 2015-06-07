//
//  correrJogo.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 07/06/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef __Trabalho_de_SO__correrJogo__
#define __Trabalho_de_SO__correrJogo__

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>

void jogoNormal();

int lerComando();

void jogar();

#endif /* defined(__Trabalho_de_SO__correrJogo__) */
