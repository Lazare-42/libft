#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *dest_cpy;
	const unsigned char *src_cpy;
	int i;
	
	dest_cpy = dest;
	src_cpy = src;
	i = 0;
	while (src_cpy[i] != (unsigned char)c && n > 0)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
		n--;
	}
	i++;
	if (src_cpy[i] == (unsigned char)c)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
		return (&dest_cpy[i]);
	}
	return (NULL);
}
