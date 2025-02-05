/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:11:23 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/28 14:13:06 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (src [i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	*str = "Hello World";
	printf("%s", ft_strdup(str));
}
*/
