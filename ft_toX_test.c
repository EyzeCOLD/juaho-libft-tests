#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (argv[2][0] == 'u')
		{
			for (int i = 0; argv[1][i]; i++)
				printf("%c", ft_toupper(argv[1][i]));
			printf("\n");
		}
		if (argv[2][0] == 'l')
		{
			for (int i = 0; argv[1][i]; i++)
				printf("%c", ft_tolower(argv[1][i]));
			printf("\n");
		}
	}
	return (0);
}
