/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:26:42 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/27 19:03:09 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci (index - 2));
}

#include <stdio.h>
int	main()
{
	int	i = 0;
	while (i < 10)
	{
		printf(" Fib no.%d = %d\n ", i, ft_fibonacci(i));
		i++;
	}
}

