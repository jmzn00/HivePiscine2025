/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:28:17 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/23 19:10:29 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	p;

	nb = 0;
	p = nb;
	while (*str >= 9 && *str <= 13 || *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			p++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb *= 10;
		nb += *str - 48;
		++str;
	}
	if (! (p % 2))
		return (nb);
	else
		return (-nb);
}
/*
#include <stdio.h>
int	main()
{
	char	*s = " ---+--+1234ab567";
	printf ("%d", ft_atoi(s));
}
*/
