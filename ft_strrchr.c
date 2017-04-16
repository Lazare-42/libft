#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	int j;

	j = i;
	i = 0;
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
