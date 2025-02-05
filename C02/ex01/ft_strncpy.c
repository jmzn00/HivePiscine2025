/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:13:30 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/21 17:13:34 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0' && i < n)
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	#include <stdio.h>
	char	src[] = "Hello";
	char	dest[5] = "";
	printf("%s", ft_strncpy(dest, src, 2));
}
*/
