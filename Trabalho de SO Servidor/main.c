//
//  main.c
//  Trabalho de SO Servidor
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include <stdio.h>
#include "serverEngine.h"
#include "utils.h"

int main(int argc, const char * argv[]) {
    only_one_instance();
    
    printf("Servidor iniciado...\n");
    startServer();
    
    return 0;
}
