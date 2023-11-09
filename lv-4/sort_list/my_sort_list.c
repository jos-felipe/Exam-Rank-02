#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*header = lst;

	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data))
			lst = lst->next;
		else
		{
			int tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = header;
		}
	}
	return (header); 
}