#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*s = argv[1];
		char	c = argv[2][0];
		printf("INPUT: %s, %c\n", s, c);
		printf("OUTPUT:\n");
		printf("* ft_memchr\t%s\n", (char *) ft_memchr(s, c, strlen(s)));
		printf("* memchr\t%s\n", (char *) memchr(s, c, strlen(s)));
	}
	return (0);
}
