//
//  jogoPrincipal.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include "jogoPrincipal.h"

void carregarDados(){
    char buffer[999];
    FILE *file;
    
    file = fopen("db.txt", "r");
    fscanf(file, "%s", buffer);
    printf("A carregar %d salas...\n", atoi(buffer));
    
    if (file) {
        while (fscanf(file, "%s", buffer)!=EOF){
            
        }
        fclose(file);
    }
}

void comecarJogo(){
    char nome[25];
    
    carregarDados();
    
    printf("Nome do jogador ?\n");
    scanf("%s", &nome);
}