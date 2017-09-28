/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 14:54:27 by lazrossi          #+#    #+#             */
/*   Updated: 2017/09/07 13:14:18 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

<<<<<<< HEAD
size_t   ft_strlen(char *s)
{
	char *start;

	start = s;
	while(*s != 0)
	{
		++s;
	}
	return (s - start);
=======
size_t   ft_strlen( char *s )
{
	char *start;
	start = s;
	while( *s != 0 )
	{
		++s;
	}
	return s - start;
>>>>>>> 68b815aa19fe365fb967eb7bc28947ac6ae0c73c
}
