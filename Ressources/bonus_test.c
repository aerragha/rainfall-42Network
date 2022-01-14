#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int ret = atoi(argv[1]);
	char buffer[40];

	memcpy(buffer, argv[2], 1073741824 * 4);
	printf("%d\n", ret);
    printf("%s\n", buffer);
    return 0;
}
