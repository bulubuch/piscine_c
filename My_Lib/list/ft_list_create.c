#include "ft_list.h"

t_list	*ft_list_create()
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new->first = NULL;
	new->last = NULL;
	new->size = 0;
	return (new);
}