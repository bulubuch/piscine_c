/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:39:48 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 19:50:45 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle02.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i_src;
	int		i_dest;

	i_src = 0;
	i_dest = 0;
	if (nb < 0)
		return (NULL);
	while (dest[i_dest] != '\0')
		i_dest++;
	while ((src[i_src] != '\0') && (i_src < nb))
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
