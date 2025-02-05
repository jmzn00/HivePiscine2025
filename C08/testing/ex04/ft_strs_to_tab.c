/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:59:22 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/30 19:20:55 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_str_len(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	t_stock_str				*array;

	array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_str_len(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int index;
    t_stock_str *structs;

    structs = ft_strs_to_tab(argc, argv);

    if (!structs) 
    {
        printf("Memory allocation failed!\n");
        return (1);
    }

    index = 0;
    while (index < argc)
    {
        printf("\t original : %s @%p\n", structs[index].str, structs[index].str);
        printf("\t copied : %s @%p\n", structs[index].copy, structs[index].copy);
        printf("\t size : %d\n", structs[index].size);
        index++;
    }

    index = 0;
    while (index < argc)
    {
        free(structs[index].copy);
        index++;
    }
    free(structs); 

    return 0;
}

