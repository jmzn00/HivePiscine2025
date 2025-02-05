/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:40:09 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:26:13 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
		{
			str [i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "HELLO";
	char str2[] = "hElLO";
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str2));	
}
*/
