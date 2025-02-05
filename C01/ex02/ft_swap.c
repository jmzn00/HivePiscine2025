/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:15:10 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/20 16:04:13 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int x = 10;
	int y = 20;
	
	printf("%d %d\n", x,y);
	ft_swap(&x, &y);
	printf("%d %d",x, y);
	return (0);
}
*/
