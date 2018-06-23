/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree_str_char.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 16:18:54 by lazrossi          #+#    #+#             */
/*   Updated: 2017/12/28 16:32:29 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strjoinfree_str_char(char **s1, char s2)
{
	char	*str;
	int		len;

	str = NULL;
	len = 0;
	if (*s1 || s2)
	{
		len = ft_strlen(*s1) + 1;
		if (!(str = ft_strnew(len)))
			return (NULL);
		if (*s1)
		{
			if (!(ft_strcpy(str, *s1)))
				return (NULL);
			ft_memdel((void*)s1);
		}
		str[len - 1] = s2;
		return (str);
	}
	return (NULL);
}