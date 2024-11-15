#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int		n = atoi(argv[3]);
		char	*s1 = argv[1];
		char	*s2 = argv[2];
		int		ret = ft_strncmp(s1, s2, n);
		printf("%d\n", ret);
	}
	return (0);
}
