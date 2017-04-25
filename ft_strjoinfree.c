/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 10:16:39 by lazrossi          #+#    #+#             */
/*   Updated: 2017/04/25 12:36:31 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoinfree(char *s1, char *s2, char a)
{
	char *str;

	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	str = ft_strjoin(s1, s2);
	if (a == 'L')
	{
		free(s1);
		s1 = NULL;
	}
	if (a == 'R')
	{
		free(s2);
		s2 = NULL;
	}
	if (a == 'B')
	{
		free(s1);
		s1 = NULL;
		free(s2);
		s2 = NULL;
	}
	return (str);
}
