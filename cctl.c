#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "cctl.h"

#define INPUTSIZE 256
#define OUTPUTSIZE INPUTSIZE

void
error(char *msg, int no)
{
    if (!msg)
        return;

    printf("Error: %s\n", msg);

    exit(no);
}

int
main(int argc, char *argv[])
{
    char *input, *output;

    input = calloc(INPUTSIZE, sizeof(char));
    if (!input)
        error("failed to allocate input buffer", ENOMEM);

    output = calloc(OUTPUTSIZE, sizeof(char));
    if (!input)
        error("failed to allocate output buffer", ENOMEM);

    return 0;
}

