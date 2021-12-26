#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		n()
{
	system("/bin/cat /home/user/level7/.pass");
    return (0);
}

int		m()
{
	puts("Nope");
	return (0);
}

int		main(int argc, char **argv)
{
	char *str = malloc(64);
	char *str2 = malloc(4);
	*str2 = 0x8048468;
	strcpy(str, (char*)(argv[1]));
	return (*str2);
}
