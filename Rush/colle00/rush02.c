/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:12:02 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/13 15:22:11 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_char(int i_x, int i_y, int x, int y)
{
	if ((i_x == 0) && (i_y == 0))
		ft_putchar('A');
	else if ((i_x == x - 1) && (i_y == 0))
		ft_putchar('A');
	else if ((i_x == 0) && (i_y == y - 1))
		ft_putchar('C');
	else if ((i_x == x - 1) && (i_y == y - 1))
		ft_putchar('C');
	else if ((i_x == 0) || (i_x == x - 1))
		ft_putchar('B');
	else if ((i_y == 0) || (i_y == y - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		i_x;
	int		i_y;

	if ((x <= 0) || (y <= 0))
		return ;
	i_y = 0;
	while (i_y < y)
	{
		i_x = 0;
		while (i_x < x)
		{
			display_char(i_x, i_y, x, y);
			i_x++;
		}
		ft_putchar('\n');
		i_y++;
	}
}
