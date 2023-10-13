#include "list.h"

t_list	*ft_swap(t_list *lst, t_list *head)
{
	int	tmp = lst->data;
	lst->data = lst->next->data;
	lst->next->data = tmp;
	return (head);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*head = lst;

	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data))
			lst = lst->next;
		else
			lst = ft_swap(lst, head);
	}
	return (head);
}