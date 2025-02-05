/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:55:55 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 19:11:28 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (r);
}

#include <stdio.h>
int	main()
{
	int i = 5;
	while (i > 0)
	{
		printf("iterative factorial %d = %d\n", i, ft_iterative_factorial(i));
		i --;
	}
}

