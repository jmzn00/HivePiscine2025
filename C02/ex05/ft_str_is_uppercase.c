/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:53:01 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:19:50 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str [i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("ABCDEFG"));
	printf("%d\n", ft_str_is_uppercase("AbCdEFG"));
	printf("%d\n", ft_str_is_uppercase("A#CD!FG"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/
