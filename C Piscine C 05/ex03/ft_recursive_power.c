/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:57:44 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 18:35:54 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = power;
	if (i > 0)
		return (nb * ft_recursive_power(nb, i - 1));
	else if (i < 0)
		return (0);
	else
		return (1);
}
