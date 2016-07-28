/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 04:11:26 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 20:59:50 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

int			line_size(char *str)
{
	int		i;

	i = 0;
	while ((str[i] != '\n') && (str[i] != '\n'))
		i++;
	return (i);
}

int			line_count(char *str)
{
	int		i;
	int		lines;

	i = 0;
	lines = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == '\n')
			lines++;
	}
	return (lines);
}

t_board		*build_board(char *str)
{
	int			y;
	int			i;
	t_board		*brd;

	i = 0;
	y = 0;
	if (!(brd = (t_board*)malloc(sizeof(t_board))))
		return (NULL);
	brd->size_y = line_count(str);
	if (!(brd->map = (char**)malloc(sizeof(char*) * brd->size_y)))
		return (NULL);
	brd->size_x = line_size(str);
	while (y < brd->size_y)
	{
		brd->map[y] = &str[brd->size_x * y + y];
		y++;
	}
	return (brd);
}

int			main(void)
{
	identify(build_board(bufferize()));
	return (0);
}
