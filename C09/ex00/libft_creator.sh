# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 14:09:46 by jmansikk          #+#    #+#              #
#    Updated: 2025/01/30 14:12:38 by jmansikk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

rm -f *.o
