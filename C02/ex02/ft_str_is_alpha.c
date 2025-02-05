/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:26:33 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:11:15 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str [i] != '\0')
	{
		if ((str [i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d\n", ft_str_is_alpha("HELLO"));
	printf("%d\n", ft_str_is_alpha("hello"));
	printf("%d\n", ft_str_is_alpha("123a45"));
}
*/
