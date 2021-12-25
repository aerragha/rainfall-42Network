#include <stdio.h>
#include <string.h>

int p(void) 
{
    char buffer[76];
    void *ret;

    fflush(stdout);
    gets(buffer);

    if (((unsigned int)ret & 0xb0000000) == 0xb0000000) 
    {
        printf("(%p)\n", ret);
        _exit(1);
    }
    puts(buffer);
    strdup(buffer);
    return;
}

int main(void)
{
    p();
}