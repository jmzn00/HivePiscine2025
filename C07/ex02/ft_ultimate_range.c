/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:54:56 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/28 19:51:28 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	amount;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	amount = max - min;
	buffer = malloc(amount * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < amount)
	{
		buffer[i] = min + i;
		i ++;
	}
	return (amount);
}

#include <stdio.h>
int	main()
{
	int	min = 10;
	int	max = 50;
	int	*tab;
	int	size;
	int	i = 0;

	size = ft_ultimate_range(&tab, min, max);

	printf("Range: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("Amount: ");
	printf("%d", ft_ultimate_range(&tab, min, max));
}

