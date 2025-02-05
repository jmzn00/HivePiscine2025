/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:33:52 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 19:12:20 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (r);
}

#include <stdio.h>
int	main()
{
	printf("4^2 = %d\n", ft_recursive_power(4,2));
	printf("4^4 = %d\n", ft_recursive_power(4,4));
	printf("4^6 = %d\n", ft_recursive_power(4,6));
	printf("5^2 = %d\n", ft_recursive_power(5,2));
	printf("5^4 = %d\n", ft_recursive_power(5,4));
	printf("5^6 = %d\n", ft_recursive_power(5,6));
}

