#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*s1 = "Haloo\0halo0";
	char	*s2 = "Haloo\0halo1";

	printf("ft_memcmp\t%d\n", ft_memcmp(s1, s2, 12));
	printf("memcmp\t\t%d\n", memcmp(s1, s2, 12));
	return (0);
}
