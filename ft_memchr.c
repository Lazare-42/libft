/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:47:00 by lazrossi          #+#    #+#             */
/*   Updated: 2017/04/20 16:17:18 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s_cpy;
	s_cpy = s;
	while (n > 0 && *s_cpy != (unsigned char)c)
	{
		n--;
		s_cpy++;
	}
	if (n != 0)
		return (&*(void*)s_cpy);
	else
		return (NULL);

}
