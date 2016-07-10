/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 20:19:06 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/10 23:56:16 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define	LEFT_BORDER_CHAR	'/'
#define	RIGHT_BORDER_CHAR	'\\'
#define INSIDE_CHAR			'*'
#define OUTSIDE_CHAR		' '
#define DOOR_CHAR			'|'
#define DOOR_HANDLE_CHAR	'$'

#include <unistd.h>

int	g_line_number = 0;
int	g_line_width = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_line(int base_width)
{

}

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		return (nb + ft_recursive_factorial(nb - 1));
	}
}

void	display_level(int base_width, int level, int height_of_level)
{
	int		x;
	int		y;

	y = 0;
	while (y < height_of_level)
	{
		x = 0;
		while (x < base_width)
		{
			ft_putchar('*');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	sastantua(int size)
{
	int		level;
	int		base_width;
	int		height_of_level;
	int		level_upsizing;

	if (size < 0)
		return ;
	level = 0;
	base_width = 2 * size;
	height_of_level = 3;
	level_upsizing = 2;
	while (level < size)
	{
		if (level % 2)
			level_upsizing++;
		display_level(base_width, level, height_of_level);
		height_of_level += 2;
		level++;
	}
}
