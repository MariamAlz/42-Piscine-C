/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 05:58:44 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/25 21:43:12 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}