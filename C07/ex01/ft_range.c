/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:39:57 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/29 15:46:00 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*array;

	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) *(max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (min < max)
	{
		array[j] = min;
		j++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int	i = 0;
	int	min = 23;
	int	max = 87;
	int     *range = ft_range(min,max);
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	
}
*/
