/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 05:40:54 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/25 07:08:58 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int	*ptr;

	ptr = malloc(length * sizeof(int));
	if (!ptr)
		return (0);
	i = 0;
	while (i < length)
	{
		ptr[i] = (*f)(tab[i]);
		i++;
	}
	return (ptr);
}
