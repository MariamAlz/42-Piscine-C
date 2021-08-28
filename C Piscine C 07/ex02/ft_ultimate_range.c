/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:00:31 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 20:25:42 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *num;
	int length;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	num = malloc(length * sizeof(int));
	if (!num)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	*range = num;
	while (i < length)
	{
		num[i] = min + i;
		i++;
	}
	return (length);
}
