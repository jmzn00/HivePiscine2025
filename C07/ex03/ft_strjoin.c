/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:57:52 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/28 14:12:29 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_copy(char **strs, char *str, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while ((i < size - 1) && sep[j] != '\0')
		{
			str[k] = sep[j];
			j++;
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (size == 0)
	{
		s1 = malloc(1);
		s1[0] = '\0';
		return (s1);
	}
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	s1 = (char *)malloc((sizeof(char) * len) + 1);
	s1 = ft_copy(strs, s1, size, sep);
	return (s1);
}
/*
#include <stdio.h>
int	main()
{
	char	*str;
	char *strings[5] = {"Jaakko", "Mansikka", "is", "the", "best"};
	char *sep = "-";
	str = ft_strjoin(5, strings, sep);
	printf("%s\n", str);
	return (0);
}
*/
