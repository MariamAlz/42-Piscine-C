/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:19:17 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/18 00:18:13 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

bool	is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}

bool	is_up(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (is_low(str[0]))
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (!is_num(str[i - 1]) && !is_up(str[i - 1]) && !is_low(str[i - 1]))
		{
			if (is_low(str[i]))
			{
				str[i] -= 32;
			}
		}
		else if (is_up(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
