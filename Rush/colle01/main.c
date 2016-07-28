/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:51:03 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/17 22:00:38 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "sudoku.h"

int		is_in_box(char **grid, int y, int x, char c)
{
	int		ix;
	int		iy;
	int		jx;
	int		jy;

	jy = 0;
	iy = ((y / 3) * 3);
	while (jy < 3)
	{
		ix = ((x / 3) * 3);
		jx = 0;
		while (jx < 3)
		{
			if (grid[jy + iy][jx + ix] == c)
				return (TRUE);
			jx++;
		}
		jy++;
	}
	return (FALSE);
}

int		is_in_line(char **grid, int y, int x, char c)
{
	int		ix;

	ix = 0;
	while (ix < 9)
	{
//		printf("IS %s in x%d y %d\n", &c, ix, y);
		if ((ix != x) && (grid[y][ix] == c))
			return (TRUE);
		ix++;
	}
	return (FALSE);
}

int		is_in_col(char **grid, int y, int x, char c)
{
	int		iy;

	iy = 0;
	while (iy < 9)
	{
		if ((iy != y) && (grid[iy][x] == c))
			return (TRUE);
		iy++;
	}
	return (FALSE);
}

int		is_possible(char **grid, int y, int x, char c)
{
	if ((is_in_box(grid, y, x, c) == FALSE)	\
	&& (is_in_col(grid, y, x, c) == FALSE)		\
	&& (is_in_line(grid, y, x, c) == FALSE))
		return (TRUE);
	return (FALSE);
}

int		sudo_solver(char **grid, int y, int x)
{
	char	c;

	if (y == 9)
		return (1);
	if (x == 9)
		return (sudo_solver(grid, y + 1, 0));
	if (grid[y][x] != '.')
		return (sudo_solver(grid, y, x + 1));
	c = '1';
	printf("x: %d y: %d\n", c, x, y);
	while (c <= '9')
	{
		if (is_possible(grid, y, x, c))
		{
			grid[y][x] = c;
			if (sudo_solver(grid, y, x + 1))
				return (1);
			else
				grid[y][x] = '.';
		}
		c++;
	}
	return (0);
}

char	**copy_grid(char **argv)
{
	char	**grid;
	int		x;
	int		y;

	y = 0;
	if (!(grid = (char**)malloc(sizeof(char*) * 10)))
		return (NULL);
	while (y < 9)
	{
		if (!(grid[y] = (char*)malloc(sizeof(char) * 10)))
			return (NULL);
		x = 0;
		while (x < 9)
		{
			if ((argv[y + 1][x] != '.') \
			&& ((argv[y + 1][x] > '9') 	\
			|| (argv[y + 1][x] < '1')))
				return (NULL);
			grid[y][x] = argv[y + 1][x];
			x++;
		}
		y++;
	}
	return (grid);
}

int		error(char *msg)
{
	int		i;

	i = 0;
	while (msg[i] != '\0')
	{
		write(1, &msg[i], 1);
		i++;
	}
	return (TRUE);
}

void	show_grid(char **grid)
{
	int		x;
	int		y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			write(1, &grid[y][x], 1);
			if (x < 8)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	write(1, "\n", 1);

}

int		main(int argc, char **argv)
{
	char	**grid;

	if (argc != 10)
		return (error("Erreur\n"));
	if (!(grid = copy_grid(argv)))
		return (error("Erreur\n"));
	if (!(sudo_solver(grid, 0, 0)))
		return (error("Erreur\n"));
	show_grid(grid);
	return (0);
}
