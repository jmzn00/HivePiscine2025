/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:54:57 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/25 18:06:12 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sepas(int array[], int alft[], int argt[], int *i)
{
	int	b;
	int	o;

	b = 0;
	o = 0;
	while (array[*i] < 17)
	{
		if (*i < 12 && *i > 7)
		{
			alft[b] = array[*i];
			(*i)++;
			b++;
		}
		if (*i < 16 && *i > 11)
		{
			argt[o] = array[*i];
			(*i)++;
			o++;
		}
	}
}

void	sepa(int array[], int atop[], int abtm[], int alft[], int argt[])
{
	int	i;
	int	o;
	int	b;

	i = 0;
	o = 0;
	b = 0;
	while (array[i] < 17)
	{
		if (i < 4)
		{
			atop[i] = array[i];
			i++;
		}
		if (i < 8 && i > 3)
		{
			abtm[o] = array[i];
			i++;
			o++;
		}
		if (i < 12 && i > 7)
			sepas(array, alft, argt, &i);
	}
}
/*
int main() {
    int size = 4;
    int array[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
    int atop[size];
    int abtm[size];
    int alft[size];
    int argt[size];

    sepa(array, atop, abtm, alft, argt);

    printf("atop: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", atop[i]);
    }
    printf("\n");

    printf("abtm: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", abtm[i]);
    }
    printf("\n");

    printf("alft: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", alft[i]);
    }
    printf("\n");

    printf("argt: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", argt[i]);
    }
    printf("\n");

    return 0;
}
*/
