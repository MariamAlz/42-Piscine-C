/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:49:05 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 06:30:39 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = power;
	result = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result *= nb;
		i--;
	}
	return (result);
}
