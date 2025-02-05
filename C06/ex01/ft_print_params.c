/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:10:29 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 16:22:37 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	o;

	o = 1;
	while (o < argc)
	{
		i = 0;
		while (argv [o][i] != '\0')
		{
			ft_putchar(argv [o][i]);
			i++;
		}
		ft_putchar('\n');
		o++;
	}
	return (0);
}
