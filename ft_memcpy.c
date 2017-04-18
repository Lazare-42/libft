#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	unsigned char const *src_byte = src;
	unsigned char *dest_byte = dest;
	while (n > 0)
	{
		dest_byte[i] = src_byte[i];
		n--;
		i++;
	}
	return (dest);
}
