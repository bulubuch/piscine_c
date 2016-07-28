/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_res.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 16:16:17 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:00:48 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void		display_none(void)
{
	ft_putstr("Aucune\n");
	exit(0);
}

void		display_res(int nb, int x, int y)
{
	static int	flag = 0;

	if (flag > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar('0' + nb);
	ft_putstr("] [");
	ft_putchar('0' + x);
	ft_putstr("] [");
	ft_putchar('0' + y);
	ft_putstr("]");
	flag++;
}
