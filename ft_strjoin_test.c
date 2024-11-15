#include "libft.h"
#include <stdio.h>

int main()
{
	char	*s1 = "String1";
	char	*s2 = "String2";
	char	*s3 = " + ";
	char	*j1 = ft_strjoin(s1, s3);
	char	*j2 = ft_strjoin(j1, s2);

	printf("%s\n", j1);
	printf("%s\n", j2);

	return (0);
}
