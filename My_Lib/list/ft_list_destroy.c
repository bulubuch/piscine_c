#include "ft_lib.h"

void	ft_list_destroy(t_list *list)
{
	while (list->size > 0)
		free(ft_list_pop(list));
	free(list);
}