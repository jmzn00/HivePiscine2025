/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:22:16 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/23 13:01:16 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_strlen("Hello"));
}
*/
