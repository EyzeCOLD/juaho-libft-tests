#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		const char	*s = argv[1];
		char		c = argv[2][0];
		char		**arr = ft_split(s, c);
		int i = 0;
		while (arr[i])
			printf("%s\n", arr[i++]);
		i = 0;
		while (arr[i])
			free(arr[i++]);
		free(arr);
	}
	return (0);
}
