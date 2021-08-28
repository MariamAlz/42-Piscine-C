/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan_rows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:23:17 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 21:25:34 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_read_dict(char *filename)
{
	int		dict_open;
	int		dict_read;
	char	*dict_aux;
	char	*dict;
	int		i;

	i = 0;
	dict_aux = (char*)malloc(2000 * sizeof(char));
	dict_open = open(filename, O_RDONLY);
	if (dict_open < 0)
	{
//		ft_msg_error();
		return (0);
	}
	dict_read = read(dict_open, dict_aux, 2000);
	dict = (char*)malloc((dict_read + 1) * sizeof(char));
	while (i < dict_read)
	{
		dict[i] = dict_aux[i];
		i++;
	}
	dict[i] = '\0';
	free(dict_aux);
	close(dict_open);
	return (dict);
}

void		ft_scan_rows(char *file, char *number)
{
	int i;
	int j;
	char *str;

	str = ft_read_dict(file);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == number[j])
		{
			j++;
			if (str[i + 1] == ':')
			{
				i = i + 3;
				while (str[i] >= 'a' && str[i] <= 'z')
				{
					ft_putchar(str[i]);
					i++;
				}
			}
			i++;	
		}
		i++;
	}
}

int		main(void)
{
	ft_scan_rows("numbers.dict", "40");
	return (0);
}
