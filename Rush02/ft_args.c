/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmansikk <jmansikka@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:44:03 by jmansikk          #+#    #+#             */
/*   Updated: 2025/02/02 16:45:13 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	write_error(void);

char	*check_num(char *argv, int ag)
{	
	int		i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (!(argv[i] >= '0') && (argv[i] <= '9'))
		{
			write_error();
			return (0);
		}
		i++;
	}
	return (argv);
}

int	ft_args(int argc, char **argv)
{
	int		ag;

	ag = argc - 1;
	if (argc > 3 || argc < 2)
	{
		write_error();
		return (0);
	}
	else if (argc == 3 || argc == 2)
	{
		if (check_num(argv[ag], ag) == 0)
		{
			return (0);
		}
	}
	return (1);
}
