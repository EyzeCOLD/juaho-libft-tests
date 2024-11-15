#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft: %d\n", ft_atoi(argv[1]));
		printf("og: %d\n", atoi(argv[1]));
	}
	return (0);
}
