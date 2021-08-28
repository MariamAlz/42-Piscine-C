/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:40:30 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 20:25:16 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *num;
	int length;
	int i;

	if (min >= max)
		return (NULL);
	length = max - min;
	num = malloc(sizeof(num) * length);
	if (!num)
		return (NULL);
	i = 0;
	while (i < length)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
