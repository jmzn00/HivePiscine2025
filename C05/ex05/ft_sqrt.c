/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:21:20 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/26 19:13:01 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	if (b >= 2)
	{
		i = 2;
		while (i * i <= b)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}	
	}
	return (0);
}

#include <stdio.h>
int	main()
{

		printf("Square root of 4 is %d\n", ft_sqrt(4));
		printf("Square root of 9 is %d\n", ft_sqrt(9));
		printf("Square root of 16 is %d\n", ft_sqrt(16));
		printf("Square root of 25 is %d\n", ft_sqrt(25));
		printf("Square root of 36 is %d\n", ft_sqrt(36));
		printf("Square root of 49 is %d\n", ft_sqrt(49));


	
}
	
