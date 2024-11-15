#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char	*str = (char *) ft_calloc(11, sizeof(char));
	for (int i = 0; i < 11; i++)
	{
		if (str[i])
			printf("[%c] ", str[i]);
		else
			printf("[\\0] ");
	}
	memcpy(str, "Hello dude", 11);
	printf("\n");
	for (int i = 0; i < 11; i++)
		if (str[i])
			printf("[ %c] ", str[i]);
		else
			printf("[\\0] ");
	printf("\n");
	free(str);
	return (0);
}
