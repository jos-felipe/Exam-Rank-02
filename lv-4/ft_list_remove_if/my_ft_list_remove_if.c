#include <stdlib.h>
#include "ft_list.h"

void	my_ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp = *begin_list;
	t_list	*prev = NULL;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
		{
			if (prev)
				prev->next = tmp->next;
			else
				*begin_list = tmp->next;
			free(tmp);
			tmp = prev;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}