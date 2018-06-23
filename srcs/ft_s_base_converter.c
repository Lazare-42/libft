#include "../includes/libft.h"

/* 
 ** s in ft_s_base_converter stands for signed
 */

char	*ft_s_base_converter(int base_size, intmax_t number)
{
	char	base_output[36] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char	*result; 
	char	minus;

	result = NULL;
	minus = 0;
	if (number < 0)
	{
		number *= -1;
		minus = '-';
	}
	if (base_size > 36)
		ft_putstr_fd("maximum base in ft_base_converter is 36\n", 2);
	else if (!(result = ft_strnew(1)))
		ft_putstr_fd("malloc error in ft_base_converter", 2);
	else while (number)
	{
		if (!(result = ft_strjoinfree_char_str((base_output[number % base_size]),
						&result)))
			break ;
		number /= base_size;
		if (minus && !(number))
			result = ft_strjoinfree_char_str(minus, &result);
	}
	return (result);
}
