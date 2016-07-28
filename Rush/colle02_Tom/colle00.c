/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coll00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tardouin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 17:49:24 by tardouin          #+#    #+#             */
/*   Updated: 2016/07/10 18:53:56 by tardouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	height(int y, int space, int x);
void	wid(int x);

void	colle(int x, int y)
{
	int		space;

	space = x - 2;
	if (y > 0)
		wid(x);
	if (x >= 1)
	{
		ft_putchar('\n');
		height(y, space, x);
	}
	if (y > 1)
	{
		wid(x);
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
		ft_putchar('|');
		while (space > 0)
		{
			ft_putchar(' ');
			space = space - 1;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		space = line - 2;
		y = y - 1;
	}
}

void	wid(int x)
{
	int xtemp;

	xtemp = x;
	ft_putchar('o');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('-');
		x = x - 1;
	}
	if (xtemp > 1)
		ft_putchar('o');
}
