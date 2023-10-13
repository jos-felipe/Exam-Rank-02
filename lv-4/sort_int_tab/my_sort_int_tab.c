unsigned int	ft_swap(int *tab, int i)
{
	int	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
	return (0);
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			i = ft_swap(tab, i);
		else
			i++;
	}
}