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
    ligarServer();
}

dungeon fazerDungeon(sala *salas){
    int i;
    dungeon masmorra;
    
    masmorra.salas = malloc(count(salas)*sizeof(sala));
    masmorra.num_salas = count(salas);
    
    for (i = 0; i<masmorra.num_salas; i++) {
        sala *current = salas;
        
        masmorra.salas[i].ID = current->ID;
        strcpy(masmorra.salas[i].desc, current->desc);
        strcpy(masmorra.salas[i].killFeed, current->killFeed);
        strcpy(masmorra.salas[i].sucessFeed, current->sucessFeed);
        strcpy(masmorra.salas[i].tagsEfeito, current->tagsEfeito);
        strcpy(masmorra.salas[i].comandosValidos, current->comandosValidos);
        
        current = current->next;
    }
    
    return masmorra;
}

void alocarMonstro(dungeon masmorra){
    
}

void ligarServer(){
    int client_to_server;
    char buf[MAX_BUF];
    char *myfifo = "/tmp/client_to_server_fifo";
    
    int server_to_client;
    char *myfifo2 = "/tmp/server_to_client_fifo";

    server_to_client = open(myfifo2, O_RDONLY);
    
    read(server_to_client, buf, MAX_BUF);
    printf("Recebido : %s\nTamanho: %d\n", buf, sizeof(buf));
    close(server_to_client);
    
    client_to_server = open(myfifo, O_WRONLY);
    write(client_to_server, getpid(), MAX_BUF);
    close(client_to_server);
    
    printf("Ligado ao servidor com o ID %d\n", getpid());
}