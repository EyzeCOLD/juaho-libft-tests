#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		size_t	len = atoi(argv[3]);
		char	*s1 = argv[1];
		char	*s2 = argv[2];
		printf("%s\n", ft_strnstr(s1, s2, len));
	}
	return (0);
}
