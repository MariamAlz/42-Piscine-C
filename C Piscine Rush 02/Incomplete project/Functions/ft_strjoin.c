/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:03:59 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 01:08:37 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_emptystr(void)
{
	char *str;

	str = malloc(1);
	if (!str)
		return (0);
	*str = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		strslen;
	int		seplen;
	int		i;

	if (size == 0)
		return (ft_emptystr());
	seplen = ft_strlen(sep);
	strslen = 0;
	i = -1;
	while (++i < size)
		strslen += ft_strlen(strs[i]);
	str = malloc(strslen + ((size - 1) * seplen) + 1);
	*str = 0;
	if (!str)
		return (0);
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < (size - 1))
			str = ft_strcat(str, sep);
	}
	return (str);
}
