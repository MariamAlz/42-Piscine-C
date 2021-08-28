/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:17:30 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 01:48:18 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;

	i = 0;
	while (str[i] != '\0')
	{
		current = str[i];
		if (current >= 32 && current <= 126)
		{
			ft_putchar(current);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		i++;
	}
}
