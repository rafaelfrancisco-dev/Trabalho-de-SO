//
//  jogoPrincipal.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include "jogoPrincipal.h"

void comecarJogo(){
    char nome[256];
    sala *salas;
    dungeon masmorra;
    
    salas = carregarDados();
    
    printf("Nome do jogador ?\n");
    scanf("%s", nome);
    
    masmorra = fazerDungeon(salas);
    alocarMonstro(masmorra);
}

dungeon fazerDungeon(sala *salas){
    dungeon masmorra;
    
    masmorra.num_salas = count(salas);
    
    return masmorra;
}

void alocarMonstro(dungeon masmorra){
    
}