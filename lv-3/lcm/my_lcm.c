unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	c = 0;
	
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		c = a;
	else
		c = b;
	while (1)
	{
		if (c % a == 0 && c % b == 0)
			return (c);
		++c;
	}
}