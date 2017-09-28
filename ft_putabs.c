/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putabs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 09:29:17 by lazrossi          #+#    #+#             */
/*   Updated: 2017/09/06 12:44:47 by lazrossi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

<<<<<<< HEAD
void	ft_putabs(char **str, char separator)
=======
void	ft_putabs(char **str)
>>>>>>> 68b815aa19fe365fb967eb7bc28947ac6ae0c73c
{
	int i;

	i = 0;
<<<<<<< HEAD
	while (str && str[i])
	{
		ft_putstr(str[i]);
		ft_putchar(separator);
=======
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
>>>>>>> 68b815aa19fe365fb967eb7bc28947ac6ae0c73c
		i++;
	}
}
