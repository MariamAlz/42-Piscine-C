/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:31:10 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 06:11:14 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0)
		return (0);
	if (i >= 1)
		return (i * ft_recursive_factorial(i - 1));
	else
		return (1);
}
