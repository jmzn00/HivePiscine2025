/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:20:23 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 19:11:43 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb > 0)
	{
		r *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
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
	int	i = 10;
	while(i > 0){
	printf("recursive factorial %d = %d\n", i, ft_recursive_factorial(i));
	i--;
	}
}
