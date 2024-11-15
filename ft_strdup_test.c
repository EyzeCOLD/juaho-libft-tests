#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s = "Hello\0Secrets of the World";
	char *ret = ft_strdup(s);
	printf("%s\n", ret);
	free(ret);
	return (0);
}
