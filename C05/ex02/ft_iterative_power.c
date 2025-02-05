/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:17:08 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 19:11:58 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	while (power > 1)
	{
		r *= nb;
		power--;
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
	printf("2^4 = %d\n", ft_iterative_power(2, 4));
	printf("4^4 = %d\n", ft_iterative_power(4, 4));
	printf("6^4 = %d\n", ft_iterative_power(6, 4));
	printf("2^5 = %d\n", ft_iterative_power(2, 5));
	printf("4^5 = %d\n", ft_iterative_power(4, 5));
	printf("6^5 = %d\n", ft_iterative_power(6, 5));
}

