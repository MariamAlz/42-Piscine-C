/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:23:45 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/10 19:50:05 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combo(int n, int loops[])
{
	int		index;
	bool	last;

	index = 0;
	while (index < n)
	{
		ft_putchar(48 + loops[index]);
		index++;
	}
	index = n - 1;
	last = true;
	while (index >= 0)
	{
		if (loops[index] != 9 - (n - 1 - index))
		{
			last = false;
			break ;
		}
		index--;
	}
	if (!last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int current, int loops[], int st_index)
{
	int index;
	int max;

	if (current == n)
	{
		ft_write_combo(n, loops);
	}
	else
	{
		max = 10 - (n - current);
		index = st_index + 1;
		while (index <= max)
		{
			loops[current] = index;
			ft_print_combn_recursive(n, current + 1, loops, index);
			index++;
		}
	}
}

void	ft_print_combn(int n)
{
	int loops[10];
	int loop_index;

	loop_index = 0;
	while (loop_index < n)
	{
		loops[loop_index] = 0;
		loop_index++;
	}
	ft_print_combn_recursive(n, 0, loops, -1);
}
