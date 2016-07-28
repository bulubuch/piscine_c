#include "ft_list.h"

bool	ft_list_append(t_list *list, void *data)
{
	t_elem	*new;

	if (!(new = (t_elem*)malloc(sizeof(t_elem))))
		return (FAIL);
	new->data = data;
	new->next = NULL;
	if (list->size == 0)
	{
		new->prev = NULL;
		list->first = new;
	}
	else
	{
		list->last->prev->next = new;
		new->prev = list->last->prev;
	}
	list->last = new;
	list->size++;
	return (SUCCESS);
}