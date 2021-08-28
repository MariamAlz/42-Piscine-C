/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:23:17 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 18:48:32 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

bool	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
			c == '\r' || c == '\f');
}

bool	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}
