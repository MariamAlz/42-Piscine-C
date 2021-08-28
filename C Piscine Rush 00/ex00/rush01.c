/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:00:38 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/07 20:56:47 by mgabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_width(int x, int y, int ycount)
{
	int xcount;

	xcount = 2;
	while (xcount <= x)
	{
		if (xcount == x && ycount == 1)
		{
			ft_putchar('\\');
		}
		else if (xcount == x && ycount == y)
		{
			ft_putchar('/');
		}
		else if (xcount == x || ycount == 1 || ycount == y)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		xcount++;
	}
}

void	rush(int x, int y)
{
	int ycount;

	if (x > 0 && y > 0)
	{
		ycount = 1;
		while (ycount <= y)
		{
			if (ycount == 1)
			{
				ft_putchar('/');
			}
			else if (ycount == y)
			{
				ft_putchar('\\');
			}
			else
			{
				ft_putchar('*');
			}
			print_width(x, y, ycount);
			ycount++;
			ft_putchar('\n');
		}
	}
}
