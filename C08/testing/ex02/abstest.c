#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
		int	num = atoi(argv[1]);
		ABS(num);

		printf("Absolute Value of given argument -> %d\n", num);
		return (0);

}
