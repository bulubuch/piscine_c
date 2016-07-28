#include "ft_list.h"

void	*ft_list_pop(t_list *list)
{
	t_elem	*tmp;
	void	*data;

	data = list->first->data;
	next = list->first->next;
	free(list->first);
	list->first = next;
	list->size--;
	if (list->first != NULL)
		list->first->prev = NULL;
	else
		list->last = NULL;
	return (data);
}