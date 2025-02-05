/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:50:37 by jmansikk          #+#    #+#             */
/*   Updated: 2025/01/25 16:32:44 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <stdio.h>
	//check invalid inputs

	//initialize 4x4 grid

	//-convert string into integers then append to array
	int	stoa(char str[], int array[])
	{
		int	i;
		int	o;
 
		i = 0;
		o = 0;;
		while(str [i] != '\0')
		{
			if (str [i] == ' ')
			{
				i++;
			}
			if (str [i] >= '0' && str [i] <= '9')
			{
				array [o] = str [i] - 48;
				o++;			
			}	
			i++;
		}
	return (0);
	}


	int	sepa(int array[], int atop[], int abtm[], int alft[], int argt[])
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
				atop [i] = array [i];
				i++;
			}
			if (i < 8 && i > 3)
			{
				abtm[o] = array [i];
				i++;
				o++;
			}
			if (i < 12 && i > 7)
			{
				o = 0;
				alft [b] = array [i];
				i++;
				b++;
			}
			if (i < 16 && i > 11)
			{
				argt[o] = array [i];
				i++;
				o++;
			}
		}
	return (0);
	}
		//-seperate array of 16 int into 4 arrays of 4 integers -- top, bottom, left, right
	
	//use backtracking to brute force solution
		//if no solution return invalid

	//return solution

	//call function to print correct matrix


int	main()
{
	char	str [] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int	array [16];
	int	atop [4];
	int	abtm [4];
	int	alft[4];
	int	argt[4];
	int	i;
	
	stoa(str, array);
	
	i = 0;
	while(i < 16)
	{
		printf("%d", array[i]);
		i++;
	}
	
	printf("\n");
	sepa(array, atop, abtm, alft, argt);
	
	i = 0;
	printf("atop: ");
	while(i < 4)
	{
		printf("%d", atop[i]);
		i++;
	}
	i = 0;
        printf("\nabtm: ");
        while(i < 4)
        {
                printf("%d", abtm[i]);
                i++;
        }
	i = 0;
        printf("\nalft: ");
        while(i < 4)
        {
                printf("%d", alft[i]);
                i++;
        }
	        i = 0;
        printf("\nargt: ");
        while(i < 4)
        {
                printf("%d", argt[i]);
                i++;
        }


}

