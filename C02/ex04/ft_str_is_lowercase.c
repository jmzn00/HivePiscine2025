/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:43:03 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:15:07 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str [i] >= 'a' && str [i] <= 'z')
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
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_lowercase("abcdefg"));
	printf("%d\n", ft_str_is_lowercase("aCcdFfg"));
	printf("%d\n", ft_str_is_lowercase("aCcdFf!@#g"));
}
*/
