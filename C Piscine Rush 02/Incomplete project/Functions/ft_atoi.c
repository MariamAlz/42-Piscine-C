/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:26:55 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 18:22:29 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r');
}

bool	is_sign(char c)
{
	return (c == '-' || c == '+');
}

bool	is_negative(char c)
{
	return (c == '-');
}

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int i;
	int number;
	int minus;

	i = 0;
	number = 0;
	minus = 1;
	while (is_space(str[i]))
	{
		i++;
	}
	while (is_sign(str[i]))
	{
		if (is_negative(str[i]))
		{
			minus *= -1;
		}
		i++;
	}
	while (is_number(str[i]))
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * minus);
}
