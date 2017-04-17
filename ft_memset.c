#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	int i;
	

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = c;
		n--;
	}
}
