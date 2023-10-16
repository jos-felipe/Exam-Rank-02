#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);

void	ft_print_tab(int *tab, unsigned int size)
{
	int	i = 0;

	while (i < size)
		printf("%i\n", tab[i++]);
}


int	main(void)
{
	int	tab[] = {3, 1, 2};

	ft_print_tab(tab, 3);
	sort_int_tab(tab, 3);
	ft_print_tab(tab, 3);
	return (0);
}