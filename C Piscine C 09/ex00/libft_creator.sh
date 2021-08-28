# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maalzaab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 06:56:12 by maalzaab          #+#    #+#              #
#    Updated: 2021/08/24 23:34:08 by maalzaab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm *.o *.a
gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar -rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
ranlib libft.a
rm *.o
