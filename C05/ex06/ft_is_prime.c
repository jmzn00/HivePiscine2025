/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:53:49 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 19:13:17 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (!(nb % i))
		{
			return (0);
		}
		else
		{
			i += 1;
		}
		return (1);
	}
}

#include <stdio.h>
int	main()
{
	int	i = 1;
	char	*r;
	while (i < 25)
	{
		if (ft_is_prime(i) == 1)
		{
			r = "IS";
		}
		else
		{
			r = "IS NOT";
		}
		printf("%d %s A PRIME NUMBER\n", i, r);
		i++;
	}
	return (0);
}

