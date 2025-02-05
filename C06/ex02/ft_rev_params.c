/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:23:35 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 16:51:01 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	i;

	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a--;
	}
	return (0);
}
