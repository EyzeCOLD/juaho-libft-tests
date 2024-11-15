#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char 	s1[] = "0123456789";
	char	*dest1 = &(s1[0]);
	char	*src1 = &(s1[2]);

	char 	s2[] = "0123456789";
	char	*dest2 = &(s2[2]);
	char	*src2 = &(s2[0]);

	ft_memmove(dest1, src1, 8);
	ft_memmove(dest2, src2, 8);
	
	printf("dest before src: %s\n", s1);
	printf("src before dest: %s\n", s2);
	return (0);
}
