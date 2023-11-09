<<<<<<< HEAD
unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
=======
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
>>>>>>> c9b0a3575ff047c1d6c4bf4df34eb8d2b95040f3
