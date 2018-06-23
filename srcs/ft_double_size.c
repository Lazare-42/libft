/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_size.c                                      :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 09:41:17 by lazrossi          #+#    #+#             */
/*   Updated: 2017/04/25 09:41:25 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	ft_double_size(double nbr)
{
	int size;

	size = 1;
	while ((double)(nbr - (int)nbr))
	{
		printf("%f\n", (double)(nbr - (int)nbr));
		nbr = (double)((double)nbr * (double)10);
		debug();
	}
	while (nbr / 10)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}
