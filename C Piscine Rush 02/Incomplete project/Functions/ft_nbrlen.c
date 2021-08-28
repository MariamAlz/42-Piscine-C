/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:06:45 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 18:14:09 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_nbrlen(int number)
{
	int i;
	int temp;

	i = 0;
	temp = number;
	if (temp == 0)
		return (1);
	while (temp != 0)
	{
		temp /= 10;
		i++;
	}
	return (i);
}

int		main(void)
{
	printf("%d", ft_nbrlen(17653));
	return (0);
}
