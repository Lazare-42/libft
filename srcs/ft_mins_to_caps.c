#include "../includes/libft.h"

char	ft_mins_to_caps(char c)
{
	if (ft_isalpha(c))
		c = c - 32;
	return (c);
}
