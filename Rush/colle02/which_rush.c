/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:16:51 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:17:10 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

int		is_0(t_board *brd)
{
	if ((brd->map[0][0] == TL_0)
	&& (brd->map[0][brd->size_x - 1] == TR_0)
	&& (brd->map[brd->size_y - 1][brd->size_x - 1] == BR_0))
		return (1);
	return (0);
}

int		is_1(t_board *brd)
{
	if ((brd->map[0][0] == TL_1)
	&& (brd->map[0][brd->size_x - 1] == TR_1)
	&& (brd->map[brd->size_y - 1][brd->size_x - 1] == BR_1))
		return (1);
	return (0);
}

int		is_2(t_board *brd)
{
	if ((brd->map[0][0] == TL_2)
	&& (brd->map[0][brd->size_x - 1] == TR_2)
	&& (brd->map[brd->size_y - 1][brd->size_x - 1] == BR_2))
		return (1);
	return (0);
}

int		is_3(t_board *brd)
{
	if ((brd->map[0][0] == TL_3)
	&& (brd->map[0][brd->size_x - 1] == TR_3)
	&& (brd->map[brd->size_y - 1][brd->size_x - 1] == BR_3))
		return (1);
	return (0);
}

int		is_4(t_board *brd)
{
	if ((brd->map[0][0] == TL_4)
	&& (brd->map[0][brd->size_x - 1] == TR_4)
	&& (brd->map[brd->size_y - 1][brd->size_x - 1] == BR_4))
		return (1);
	return (0);
}
