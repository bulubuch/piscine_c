/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bufferize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 04:15:00 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:15:58 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char		*bufferize(void)
{
	t_list	*file;
	char	*buff;
	int		size;
	int		list_size;

	file = NULL;
	list_size = 0;
	size = BUFF_SIZE;
	while (size == BUFF_SIZE)
	{
		if (!(buff = (char*)malloc(sizeof(char) * BUFF_SIZE)))
			return (NULL);
		size = read(0, buff, BUFF_SIZE);
		ft_list_push_back(&file, buff, size);
		list_size++;
	}
	return (list_to_str(file, list_size));
}
