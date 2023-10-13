#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int	main(void)
{
	t_list begin_list = {NULL, NULL};
	t_list middle_list = {NULL, NULL};
	t_list end_list = {NULL, NULL};

	begin_list.next = &middle_list;
	middle_list.next = &end_list;
	printf("%i\n", ft_list_size(&begin_list));
	return (0);
}