/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:09:05 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/20 16:03:50 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a,b,&div,&mod);
	
	printf("div: %d\n", div);
	printf("mod: %d", mod);
}
*/
