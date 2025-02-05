/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:48:56 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/22 18:40:38 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb )
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src [j] != '\0')
	{
		dest [i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	str1[] = "Hello";
	char	str2[] = "World";
	printf("%s", ft_strncat(str1, str2, 10));
}
*/
