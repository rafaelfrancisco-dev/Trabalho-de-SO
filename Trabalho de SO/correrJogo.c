//
//  correrJogo.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 07/06/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include "correrJogo.h"
#include "utils.h"

void jogoNormal(){
    printf("Juntando-se como jogador normal\n");
    
    for(;;){
        if (lerComando() == 1) {
            break;
        }
    }
}

int lerComando(){
    bool check_jogo = false;
    char entrada[64], *temp;
    
    printf("Insira um comando: \n");
    scanf("%s", entrada);
    
    temp = strtok(entrada, " ");
    
    if (strcmp(temp, "jogar") == 0) {
        check_jogo = true;
        jogar();
    }
    if(strcmp(temp, "sair") == 0){
        
        exit(0);
    }
    if (strcmp(temp, "terminar") == 0 && check_jogo == true) {
        int jogo_fifo;
        char *jogofifo = "/tmp/special_fifo";

        jogo_fifo = open(jogofifo, O_RDWR);
        write(jogo_fifo, "terminar", sizeof("terminar"));
        close(jogo_fifo);
        main();
    }
    
    return 0;
}

void jogar(){
    int special_fifo;
    char *specialfifo = "/tmp/special_fifo";
    
    special_fifo = open(specialfifo, O_WRONLY);
    write(special_fifo, "Start !", sizeof("Start !"));
    close(special_fifo);
    
    ClearScreen();
}