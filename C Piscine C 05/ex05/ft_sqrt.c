/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:58:14 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 19:50:26 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int sqrt;
	unsigned int i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while ((sqrt = i * i) <= (unsigned int)nb)
		i++;
	i -= 1;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
