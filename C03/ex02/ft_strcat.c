/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:30:14 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/22 18:39:58 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src [j] != '\0')
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
	char	*t;

	char b[] = "World";
	char a[] = "Hello";

	t = ft_strcat(a,b);
	printf("%s\n", t);
	return (0);
}
*/
