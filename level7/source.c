#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct internet {
  int priority;
  char *name;
};


char c[64];

void m(void)
{
    printf("%s - %d\n", c, time(0));
}

int main(int argc, char **argv)
{
    struct internet *str1, *str2;
    char *str1;
    char *str2;
    FILE *fs;

    str1 = malloc(sizeof(struct internet));
    str1->priority = 1;
    str1->name = malloc(8);

    str2 = malloc(sizeof(struct internet));
    str2->priority = 2;
    str2->name = malloc(8);

    strcpy(str1->name, argv[1]);
    strcpy(str2->name, argv[2]);

    fopen("/home/user/level8/.pass", "r");
    fgets(c, 64, fs);
    puts("~~");
    return (0);
}