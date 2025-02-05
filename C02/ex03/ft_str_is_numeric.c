/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:48:53 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:09:41 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str [i] >= '0' && str [i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("10922373837"));
	printf("%d\n", ft_str_is_numeric("1092e373f37"));
}
*/
