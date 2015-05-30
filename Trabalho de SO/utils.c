//
//  utils.c
//  Trabalho de SO
//
//  Created by Rafael Lopes Francisco on 12/05/15.
//  Copyright (c) 2015 Rafael Lopes Francisco. All rights reserved.
//

#include "utils.h"

int count(sala *head)
{
    sala *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
        n=n->next;
        c++;
    }
    return c;
}