#include <stdio.h>
#include <stdlib.h>

void run(void) {
    fwrite("Good... Wait what?\n", 1, 19, stdout);
    system("/bin/sh");
}

int main(void) {
    char str[76];

    gets(str);
    return 0;
}