//
//  utils.h
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 30/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#ifndef __Trabalho_de_SO__utils__
#define __Trabalho_de_SO__utils__

#include <fcntl.h>	/* fcntl, open */
#include <stdlib.h>	/* atexit, getenv, malloc */
#include <stdio.h>	/* fputs, printf, puts, snprintf */
#include <string.h>	/* memcpy */
#include <unistd.h>	/* sleep, unlink */

/* Filename for only_one_instance() lock. */
#define INSTANCE_LOCK "rosetta-code-lock"

void fail(const char *message);
void ooi_unlink(void);
void only_one_instance(void);

#endif /* defined(__Trabalho_de_SO__utils__) */
