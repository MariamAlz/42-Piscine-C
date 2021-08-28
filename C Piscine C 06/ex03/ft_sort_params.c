/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:59:48 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/22 04:09:02 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_str(char **str, int size)
{
	int		i;
	bool	swapped;

	i = 0;
	swapped = true;
	while (swapped)
	{
		i = 0;
		swapped = false;
		while (i < size)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				ft_swap(&str[i], &str[i + 1]);
				swapped = true;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_str(argv, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
