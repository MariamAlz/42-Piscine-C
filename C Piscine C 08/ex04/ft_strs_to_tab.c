/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:38:31 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/22 04:53:28 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*st;
	int					i;

	if (!(st = malloc((ac + 1) * (sizeof(struct s_stock_str)))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		st[i].size = ft_strlen(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_strdup(av[i]);
		i++;
	}
	st[i] = (struct s_stock_str) {0, 0, 0};
	return (st);
}
