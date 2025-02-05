/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:16:11 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:24:20 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}	
/*
#include <stdio.h>
int	main()
{
	char str[] = "hello";
	char str2[] = "HelLo";		
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str2));
}
*/
