/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tardouin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:50:07 by tardouin          #+#    #+#             */
/*   Updated: 2016/07/10 20:47:55 by acattan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	widup(int x);
void	widdown(int x);
void	height(int y, int space, int x);

void	colle(int x, int y)
{
	int		space;

	space = x - 2;
	if (y > 0)
		widup(x);
	if (x >= 1)
	{
		ft_putchar('\n');
		height(y, space, x);
	}
	if (y > 1)
	{
		widdown(x);
		ft_putchar('\n');
	}
}

void	height(int y, int space, int x)
{
	int		line;

	line = space + 2;
	y = y - 2;
	while (y > 0)
	{
		ft_putchar('B');
		while (space > 0)
		{
			ft_putchar(' ');
			space = space - 1;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		space = line - 2;
		y = y - 1;
	}
}

void	widup(int x)
{
	int		xtemp;

	xtemp = x;
	ft_putchar('A');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('B');
		x = x - 1;
	}
	if (xtemp > 1)
		ft_putchar('C');
}

void	widdown(int x)
{
	int		xtemp;

	xtemp = x;
	ft_putchar('A');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('B');
		x = x - 1;
	}
	if (xtemp > 1)
		ft_putchar('C');
}
