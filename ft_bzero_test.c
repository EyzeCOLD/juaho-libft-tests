#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char	*str = malloc(20 * sizeof(char));
	ft_bzero(str, 20);
	for (int i = 0; i < 20; i++)
		printf("%c ", str[i] + '0');
	printf("\n");
	return (0);
}
