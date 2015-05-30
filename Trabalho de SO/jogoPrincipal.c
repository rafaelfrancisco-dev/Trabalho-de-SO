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
    char buffer[256];
    sala *head = NULL;
    FILE *file;
    
    file = fopen("db.txt", "r");
    fscanf(file, "%s", buffer);
    printf("A carregar %d salas...\n", atoi(buffer));
    numSalas = atoi(buffer);
    
    head = malloc(sizeof(sala));
    
    if (file) {
        fgets(buffer, sizeof(buffer), file);
        
        for(i =0;i<numSalas;i++){
            sala * current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            
            current->next = malloc(sizeof(sala));
            
            fgets(buffer, sizeof(buffer), file);
            current->next->ID = atoi(buffer);
            
            fgets(buffer, sizeof(buffer), file);
            strcpy(current->next->desc, buffer);
            
            fgets(buffer, sizeof(buffer), file);
            strcpy(current->next->killFeed, buffer);
            
            fgets(buffer, sizeof(buffer), file);
            strcpy(current->next->sucessFeed, buffer);
            
            fgets(buffer, sizeof(buffer), file);
            strcpy(current->next->comandosValidos, buffer);
            
            fgets(buffer, sizeof(buffer), file);
            strcpy(current->next->tagsEfeito, buffer);
            
            current->next->next = NULL;
        }
        fclose(file);
    }
    
    head = head->next;
    return head;
}

void comecarJogo(){
    char nome[256];
    sala *salas;
    
    salas = carregarDados();
    
    printf("Nome do jogador ?\n");
    fgets(nome, sizeof(nome), stdin);
}