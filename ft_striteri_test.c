#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void haxor(unsigned int i, char *s)
{
	if (i % 2)
		*s = toupper(*s);
	else
		*s = tolower(*s);
}

int main()
{
	char s[] = "Piano on soitin";

	ft_striteri(s, haxor);
	printf("%s\n", s);
	return (0);
}
