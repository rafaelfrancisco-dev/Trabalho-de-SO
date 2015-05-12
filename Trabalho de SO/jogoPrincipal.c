//
//  jogoPrincipal.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include "jogoPrincipal.h"

sala * carregarDados(){
    int i, numSalas;
    char buffer[999];
    sala *head = NULL;
    FILE *file;
    
    file = fopen("db.txt", "r");
    fscanf(file, "%s", buffer);
    printf("A carregar %d salas...\n", atoi(buffer));
    numSalas = atoi(buffer);
    
    head = malloc(sizeof(sala));
    
    if (file) {
        for(i =0;i<numSalas;i++){
            sala * current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            
            current->next = malloc(sizeof(sala));
            
            fscanf(file, "%s", buffer);
            current->next->desc = buffer;
            
            fscanf(file, "%s", buffer);
            current->next->killFeed = buffer;
            
            current->next->next = NULL;
        }
        fclose(file);
    }
    
    return head;
}

void comecarJogo(){
    char nome[25];
    sala *salas;
    
    salas = carregarDados();
    
    printf("Nome do jogador ?\n");
    scanf("%s", &nome);
}