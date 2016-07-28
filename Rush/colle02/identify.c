/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 13:12:41 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:17:23 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void	identify(t_board *brd)
{
	if ((brd->size_y == 1) && (brd->size_x == 1) && (brd->map[0][0] == 'A'))
	{
		display_res(2, 1, 1);
		display_res(3, 1, 1);
		display_res(4, 1, 1);
	}
	else
	{
		if (is_0(brd))
			display_res(0, brd->size_x, brd->size_y);
		if (is_1(brd))
			display_res(1, brd->size_x, brd->size_y);
		if (is_2(brd))
			display_res(2, brd->size_x, brd->size_y);
		if (is_3(brd))
			display_res(3, brd->size_x, brd->size_y);
		if (is_4(brd))
			display_res(4, brd->size_x, brd->size_y);
	}
}
