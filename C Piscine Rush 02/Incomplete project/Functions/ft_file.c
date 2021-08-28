/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:49:53 by maalzaab          #+#    #+#             */
/*   Updated: 2021/08/21 18:58:01 by maalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_open_file(char *path)
{
	return	(open(path, 0_RD0NLY));
}

int		ft_close_file(int fd)
{
	return (close(fd));
}
