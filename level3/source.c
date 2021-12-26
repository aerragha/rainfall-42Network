#include <stdio.h>
#include <stdlib.h>

int m;

void v(void) {
    char buffer[520];

    fgets(buffer, 512, stdin);
    printf(buffer);
    if (m == 64) 
    {
        fwrite("Wait what?!\n", 1, 12, stderr);
        system("/bin/sh");
    }
}

void main(void)
{
    v();
}