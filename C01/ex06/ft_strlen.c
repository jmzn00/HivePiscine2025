/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:41:26 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/20 16:02:21 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}

//int	main() {char x[] = "Hello"; int l = ft_strlen(x); printf("%d", l);}
