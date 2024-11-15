#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*s = argv[1];
		char	c = argv[2][0];

		printf("strchr: %s\n", ft_strchr(s, c));
		printf("strrchr: %s\n", ft_strrchr(s, c));
	}
	return (0);
}
