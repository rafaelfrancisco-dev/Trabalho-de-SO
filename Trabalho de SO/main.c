//
//  main.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "jogoPrincipal.h"

int main(int argc, const char * argv[]) {
    int escolha;
    
    printf("SO 14/15\n");
    printf("1 - Começar o jogo\n");
    printf("2 - Não implementado\n");
    printf("3 - Sair\n");
    
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            comecarJogo();
            break;
        case 2:
            break;
        case 3:
            exit(0);
            break;
        default:
            break;
    }
}
