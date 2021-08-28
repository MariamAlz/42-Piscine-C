/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:04:48 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/17 22:12:38 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int j;

	i = nb / 2;
	j = 2;
	if (nb <= 1)
		return (0);
	while (j <= i)
	{
		if (nb % j == 0)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (1)
	{
		if (ft_is_prime(i) == 1)
		{
			return (i);
		}
		i++;
	}
}
