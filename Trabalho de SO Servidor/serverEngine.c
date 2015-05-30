//
//  serverEngine.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 30/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include "serverEngine.h"

void startServer(){
    cliente *head = malloc(sizeof(cliente));
    int client_to_server;
    char *myfifo = "/tmp/client_to_server_fifo";
    
    int server_to_client;
    char *myfifo2 = "/tmp/server_to_client_fifo";
    
    /* create the FIFO (named pipe) */
    mkfifo(myfifo, 0666);
    mkfifo(myfifo2, 0666);
    
    /* open, read, and display the message from the FIFO */
    client_to_server = open(myfifo, O_RDONLY);
    server_to_client = open(myfifo2, O_WRONLY);
    
    printf("FIFO's criados\n");
    
    do{
        
    }while(true);
}

void addCliente(){
    
}