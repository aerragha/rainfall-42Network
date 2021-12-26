#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int m;

void o(char *str)
{
    system("/bin/sh");
    _exit(1);
}


void n(void)
{
    char buffer[520];
    
    fgets(buffer, 512, stdin);
    printf(buffer);
    exit(1);
}

void main(void)
{
    n();
}