/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achowdhu <achowdhu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:28:33 by achowdhu          #+#    #+#             */
/*   Updated: 2025/01/19 18:26:55 by jmansikk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	draw(int w, char l, char m, char r);
void	ft_putchar(char c);

void	draw(int w, char l, char m, char r)
{
	int	index;

	if (w <= 0)
	{
		return ;
	}
	ft_putchar(l);
	index = 0;
	while (index < w - 2)
	{
		ft_putchar(m);
		index++;
	}
	if (index > 1)
		ft_putchar(r);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	index;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	draw(x, 'A', 'B', 'C');
	index = 0;
	while (index < y - 2)
	{
		draw(x, 'B', ' ', 'B');
		index++;
	}
	if (y > 1)
		draw(x, 'A', 'B', 'C');
}
