#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = i;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (s[j] == c)
		return ((char*)&s[j]);
	return (NULL);
}
