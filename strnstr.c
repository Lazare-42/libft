#include <stdlib.h>

char *strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;
	size_t cmp;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		cmp = i;
		j = 0;
		if (haystack[cmp] == needle[j])
		{
			while(haystack[cmp] == needle[j] && haystack[cmp] && needle[j] && \
					cmp < n)
			{
				cmp++;
				j++;
				if(haystack[cmp] == needle[j] && needle[j + 1] == '\0')
					return ((char*)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}

