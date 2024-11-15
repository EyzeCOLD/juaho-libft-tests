#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	input = 0;
	printf("Input ascii code: %d\n\n", input);
	printf("Alpha-numeric:\t[%d]\n", ft_isalnum(input));
	printf("Alphabet:\t[%d]\n", ft_isalpha(input));
	printf("Ascii:\t\t[%d]\n", ft_isascii(input));
	printf("Digit:\t\t[%d]\n", ft_isdigit(input));
	printf("Printable:\t[%d]\n", ft_isprint(input));
	return (0);
}
