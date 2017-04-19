/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:22:31 by lazrossi          #+#    #+#             */
/*   Updated: 2017/04/19 18:56:00 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	char 		*dst_cpy = dst;
	size_t		len_creat;
	size_t 		len;
	size_t 		len_fin;

	len_creat = 0;
	while (size != 0 && dst_cpy != '\0')
	{
		dst_cpy++;
		size--;
	}
	len = dst_cpy - dst;
	len_fin = size - len;
	if (len == 0)
		return (len_fin + ft_strlen((char*)src));
	while ((char)*src)
	{
		if (len != 1)
		{
			*dst_cpy++ = *src;
			len--;
		}
		src++;
		len_creat++;
	}
	*dst_cpy = '\0';
	return (len_fin + len_creat);
}
