#include <stdlib.h>
#include "stdlib.h"

int	ft_size(int nbr)
{
	int size;

	size = 1;
	while (nbr / 10)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}


char *ft_itoa(int nbr)
{
	char 			*str;
	int 			size;
	unsigned int 	tmp;
	int 			sign;

	sign = 0;
	size = ft_size(nbr);
	if (nbr < 0)
	{
		tmp = -nbr;
		nbr = -nbr;
		size++;
		sign = 1;
	}
	else
		tmp = nbr;
	str = (char*)malloc(sizeof(char) * size + 1);
	str[size--] = '\0';
	while (tmp > 0)
	{
		str[size--] = tmp % 10 + 48;
		tmp /= 10;
	}
	if (sign)
		str[size] = '-';
	return (str);
}
