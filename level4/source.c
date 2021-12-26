#include <stdio.h>
#include <stdlib.h>

int m;

void p(char *str)
{
    printf(str);
}


void n(void)
{
    char buffer[520];
    
    fgets(buffer, 512, stdin);
    p(buffer);
    if (m == 0x1025544) {
        system("/bin/cat /home/user/level5/.pass");
    }
}

void main(void)
{
    n();
}