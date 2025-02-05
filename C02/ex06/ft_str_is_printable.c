/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:02:13 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:23:28 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{	
		return (1);
	}
	while (str [i])
	{
		if (str [i] >= 32 && str [i] <= 126)
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
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("ABCDEFG"));
	printf("%d\n", ft_str_is_printable("ABesE2G"));
	printf("%d\n", ft_str_is_printable("AB\nCD"));
}
*/
