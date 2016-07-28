/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:46:10 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 19:31:32 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new->next = NULL;
	new->data = data;
	return (new);
}
