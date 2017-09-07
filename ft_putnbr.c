/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 17:23:11 by lazrossi          #+#    #+#             */
/*   Updated: 2017/09/05 09:28:50 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	ft_putnbr(int n)
{
	unsigned int s;

	s = 0;
	if (n < 0)
	{
		ft_putchar('-');
		s = -n;
	}
	else
		s = n;
	if (s / 10)
		ft_putnbr(s / 10);
	ft_putchar(s % 10 + '0');
}
