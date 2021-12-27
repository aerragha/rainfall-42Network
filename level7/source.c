#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char c[64];

void m(void)
{
    printf("%s - %d\n", c, time(0));
}

int main(int argc, char **argv)
{
    char *str1;
    char *str2;
    FILE *fs;

    str1 = malloc(8);
    *str1 = 1;

    str2 = malloc(8);
    *str2 = 2;

    strcpy(str1, argv[1]);
    strcpy(str2, argv[2]);

    fopen("/home/user/level8/.pass", "r");
    fgets(c, 64, fs);
    puts("~~");
    return (0);
}