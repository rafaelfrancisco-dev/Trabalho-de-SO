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
#include "signalHandler.h"

int main(int argc, const char * argv[]) {
    struct sigaction sa;
    
    only_one_instance();
    
    // Setup the sighub handler
    sa.sa_handler = &handle_signal;
    
    // Restart the system call, if at all possible
    sa.sa_flags = SA_RESTART;
    
    // Block every signal during the handler
    sigfillset(&sa.sa_mask);
    
    // Intercept SIGHUP and SIGINT
    if (sigaction(SIGHUP, &sa, NULL) == -1) {
        perror("Error: cannot handle SIGHUP"); // Should not happen
    }
    
    if (sigaction(SIGUSR1, &sa, NULL) == -1) {
        perror("Error: cannot handle SIGUSR1"); // Should not happen
    }
    
    // Will always fail, SIGKILL is intended to force kill your process
    if (sigaction(SIGKILL, &sa, NULL) == -1) {
        perror("Cannot handle SIGKILL"); // Will always happen
        printf("You can never handle SIGKILL anyway...\n");
    }
    
    if (sigaction(SIGINT, &sa, NULL) == -1) {
        perror("Error: cannot handle SIGINT"); // Should not happen
    }
    
    printf("Servidor iniciado com o PID %d...\n", getpid());
    startServer();
    
    return 0;
}
