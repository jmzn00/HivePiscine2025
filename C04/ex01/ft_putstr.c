/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:25:53 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/23 13:01:50 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, &str [i], 1);
		i ++;
	}	
}
/*
int	main(){ft_putstr("Hello");}
*/
