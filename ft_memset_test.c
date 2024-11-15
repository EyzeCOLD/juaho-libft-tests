#include "libft.h"
#include <stdio.h>

int main()
{
	char	s[] = "Hello dude";
	ft_memset(s, 'X', 5);
	printf("%s\n", s);
	return (0);
}
