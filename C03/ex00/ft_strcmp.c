/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:51:05 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/22 19:40:23 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1 [i] == s2 [i] && (s1 [i] != '\0' || s2 [i] != '\0' ))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(){ printf("%d\n", ft_strcmp("Hello", "Hello1")); }
*/
