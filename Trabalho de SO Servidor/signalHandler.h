//
//  signalHandler.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 07/06/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef __Trabalho_de_SO__signalHandler__
#define __Trabalho_de_SO__signalHandler__

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int signal);
void handle_sigalrm(int signal);
void do_sleep(int seconds);

#endif /* defined(__Trabalho_de_SO__signalHandler__) */
