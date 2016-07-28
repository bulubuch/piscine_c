/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:10:23 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/16 21:10:30 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

bool	ft_list_push(t_list *list, void *data)
{
	t_elem	*new;

	if (!(new = (t_elem*)malloc(sizeof(t_elem))))
		return (FAIL);
	new->data = data;
	new->prev = NULL;
	if (list->size == 0)
	{
		new->next = NULL;
		list->last = new;
	}
	else
	{
		list->first->next->prev = new;
		new->next = list->first->next;
	}
	list->first = new;
	list->size++;
	return (SUCCESS);
}
