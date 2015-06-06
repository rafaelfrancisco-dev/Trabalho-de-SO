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
    cliente *temp = NULL;
    pid_t pid_server = getpid();
    int client_to_server;
    char *myfifo = "/tmp/client_to_server_fifo";
    
    int server_to_client;
    char *myfifo2 = "/tmp/server_to_client_fifo";
    
    /* create the FIFO (named pipe) */
    mkfifo(myfifo, 0666);
    mkfifo(myfifo2, 0666);
    
    pid_t child_pid = fork();
    pid_t child_ppid = getppid(); //get the child's parent pid
    
    if (child_ppid == pid_server) //if the current process is a child of the main process
    {
        server_to_client = open(myfifo2, O_WRONLY);
        write(server_to_client, "Server ligado", sizeof("Server ligado"));
        printf("FIFO de saida criado\n");
        close(server_to_client);
        exit(1); //making sure to avoid fork bomb
    }

    /* open, read, and display the message from the FIFO */
    client_to_server = open(myfifo, O_RDONLY);
    printf("FIFO's criados\n");
    
    do{
        int pid_temp;
        read(client_to_server, pid_temp, MAX_BUF);
        addCliente(*head);
    }while(true);
}

void addCliente(cliente lista){
    
}