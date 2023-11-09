int	is_power_of_2(unsigned int n)
{
	int	i = 0;

	while (i < 32)
	{
		if (n == (1 << i))
			return (1);
	}
	return (0);
}