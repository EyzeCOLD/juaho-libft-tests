#include "libft.h"
#include <stdio.h>

int main()
{
	char		dest[] = "xxxxxxxxxx";
	const char	*src = "Hello";
	ft_memcpy(dest, src, 6);
	printf("%s\n", dest);
	return (0);
}
