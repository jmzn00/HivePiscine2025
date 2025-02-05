/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:23:42 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/20 16:03:21 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_ultimate_div_mod(&a,&b);
	
	printf("*a: %d\n", a);
	printf("*b: %d", b);	
}
*/
