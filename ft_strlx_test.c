#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void test(char*, const char*, size_t, size_t buf_size,
	   	size_t (*f)(char*, const char*, size_t));

int main()
{
	char		*dest = "Hello";
	const char	*src = " Batman";
	size_t		size = 10;
	size_t		buf_size = 10;

	printf("FT lcat: ");
	test(dest, src, size, buf_size, &ft_strlcat);
	printf("BSD lcat: ");
	test(dest, src, size, buf_size, &strlcat);
	printf("FT lcpy: ");
	test(dest, src, size, buf_size, &ft_strlcpy);
	printf("BSD lcpy: ");
	test(dest, src, size, buf_size, &strlcpy);

	return (0);
}

void test(char *dest, const char *src, size_t size, size_t buf_size,
	   	size_t (*f)(char*, const char*, size_t))
{
	char	*buf = (char *) malloc(buf_size * sizeof(char));
	if (!buf || !f || !dest)
	{
		free(buf);
		return ;
	}
	memcpy(buf, dest, strlen(dest) + 1);
	size_t		ret;
	ret	= f(buf, src, size);

	printf("%s\n", buf);
	printf("return value: %zu\n", ret);
	free(buf);
}
