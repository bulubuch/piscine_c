/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:40:45 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 19:31:30 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

void		ft_list_push_back(t_list **begin_list, char *data, int size)
{
	t_list		*new;
	t_list		*i;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return ;
	new->next = NULL;
	new->data = data;
	new->len = size;
	if (*begin_list != NULL)
	{
		i = *begin_list;
		while (i->next != NULL)
			i = i->next;
		i->next = new;
	}
	else
		*begin_list = new;
}
