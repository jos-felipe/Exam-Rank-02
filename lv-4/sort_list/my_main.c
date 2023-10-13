#include <stdio.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

int	ascending(int a, int b)
{
	return (a <= b);
}

void	print_lst(t_list *lst)
{
	while (lst->next)
	{
		printf("%i\n", lst->data);
		lst = lst->next;
	}
	printf("%i\n", lst->data);
}

int	main(void)
{
	t_list	node1 = {3, NULL};
	t_list	node2 = {1, NULL};
	t_list	node3 = {2, NULL};

	node1.next = &node2;
	node2.next = &node3;
	print_lst(&node1);
	print_lst(sort_list(&node1, ascending));
	return (0);
}