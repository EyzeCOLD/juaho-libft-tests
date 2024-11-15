#include "libft.h"
#include <stdio.h>
#include <ctype.h>

char haxor(unsigned int i, char c)
{
	if (i % 2)
		return (toupper(c));
	else
		return (tolower(c));
}

int main()
{
	char s[] = "Piano on soitin";
	printf("%s\n", s);
	char *ret = ft_strmapi(s, haxor);
	printf("%s\n", ret);
	free(ret);
	return (0);
}
