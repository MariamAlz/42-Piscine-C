/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:23:11 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 06:09:29 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	factorial = 1;
	i = nb;
	while (i != 0)
	{
		factorial *= i;
		i--;
	}
	return (factorial);
}
