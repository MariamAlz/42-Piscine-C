/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:40:10 by ikhan             #+#    #+#             */
/*   Updated: 2021/08/21 18:50:33 by ikhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"


int	main(int argc, char **argv)
{
	int c;
	int t;

	c = 0;

	if (argc == 2)
	{
		open("numbers.dict", O_RDONLY);
				}

	else if (argc == 3)
	{
		t = argc - 1;
		while (t > 0)
		{
			c = 0;
			while (argv[t][c] != '\0')
			{
				write(1, &argv[t][c], 1);
				c++;
			}
			write(1, "\n", 1);
			t--;
		}
	}

	else
	   ft_putstr("Error\n");	
	return (0);
}

