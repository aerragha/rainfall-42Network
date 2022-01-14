#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    int ret;
    char buffer[40];
    int check;
    
    check = atoi(argv[1]);
    if (check < 10) {
        memcpy(buffer, argv[2], check * 4);
        if (check == 0x574f4c46) {
        execl("/bin/sh", "sh", 0);
        }
        ret = 0;
    }
    else {
        ret = 1;
    }
    return ret;
}