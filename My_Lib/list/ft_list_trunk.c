/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_trunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:10:43 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/16 21:11:49 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	*ft_list_trunk(t_list *list)
{
	t_elem	*tmp;
	void	*data;

	data = list->last->data;
	prev = list->last->prev;
	free(list->last);
	list->last = prev;
	list->size--;
	if (list->last != NULL)
		list->last->next = NULL;
	else
		list->first = NULL;
	return (data);
}
