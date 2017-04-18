/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 09:29:19 by lazrossi          #+#    #+#             */
/*   Updated: 2017/04/18 09:29:54 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *nptr)
{
	int i;
	int sign;
	int nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while (nptr[i] < 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nptr[i] + 48 + nbr * 10;
		i++;
	}
	return (nbr * sign);
}
