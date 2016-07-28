/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:12:20 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/16 21:13:05 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H

typedef struct	s_elem
{
	s_elem	*prev;
	s_elem	*next;
	void	*data;
}				t_elem;

typedef struct	s_list
{
	t_elem	*first;
	t_elem	*last;
	int		size;
}				t_list;

t_list	*ft_list_create();
void	*ft_list_pop(t_list *list);
void	*ft_list_trunk(t_list *list);
bool	ft_list_push(t_list *list, void *data);
bool	ft_list_append(t_list *list, void *data)
bool	ft_list_destroy(t_list);

#endif
