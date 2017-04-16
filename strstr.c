#include <stdlib.h>

char *strstr(const char *haystack,const char *needle)
{
	int i;
	int j;
	int cmp;

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
			while(haystack[cmp] == needle[j] && haystack[cmp] && needle[j])
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

