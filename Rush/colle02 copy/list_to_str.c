/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:15:25 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:49:35 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char		*list_to_str(t_list *file, int list_size)
{
	t_list	*index;
	char	*buff;

	if (!(buff = (char*)malloc(sizeof(char) * BUFF_SIZE * list_size + 1)))
		return (NULL);
	else
	{
		buff[0] = '\0';
		index = file;
		while (list_size-- > 0)
		{
			ft_strncat(buff, index->data, index->len);
			index = index->next;
		}
		ft_list_foreach(file, &free);
		ft_list_clear(&file);
	}
	return (buff);
}
