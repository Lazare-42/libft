/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 14:00:49 by lazrossi          #+#    #+#             */
/*   Updated: 2017/04/20 18:30:03 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char 	*new;
	int 	i;

	i = 0;
	if(!(new = malloc(sizeof(char) * size + 1)))
		return (NULL);
	new[size] = '\0';
	while (new[i])
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}