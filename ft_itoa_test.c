#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(130));
	printf("%s\n", ft_itoa(-130));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
