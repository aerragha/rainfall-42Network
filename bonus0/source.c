#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *p( char *tmp, char *str)
{
	char buf[4096];
	
	puts(str);
	read(0, &buf, 4096);
	*strchr(buf, '\n') = 0;
	return (strncpy(tmp, buf, 20));
}

char *pp(char *str)
{
	char s1[20];
	char s2[28];

	p(s1, " - ");
	p(s2, " - ");
	strcpy(str, s1);
	str[strlen(str)] = 32;
	strcat(str, s2);
	return (str);
}

int	main(void)
{
	char str[42];

	pp(str);
	puts(str);
	return (0);
}
