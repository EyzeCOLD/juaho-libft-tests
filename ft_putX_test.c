#include "libft.h"
#include <stdio.h>

int main()
{
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Haloo\n", 1);
	ft_putendl_fd("Linebreak incoming", 1);
	ft_putnbr_fd(-300, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
