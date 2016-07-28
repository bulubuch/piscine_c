/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:20:24 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 19:31:29 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void		ft_list_clear(t_list **begin_list)
{
	if (*begin_list == NULL)
		return ;
	else if (begin_list[0]->next == NULL)
	{
		free(*begin_list);
		*begin_list = NULL;
	}
	else
	{
		ft_list_clear(&begin_list[0]->next);
		free(*begin_list);
		*begin_list = NULL;
	}
}
