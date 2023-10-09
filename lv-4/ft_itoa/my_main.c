#include <stdio.h>

char	*ft_itoa(int nbr);

int	main(void)
{
	int	nbr;

	nbr = -2147483648;
	printf("%s\n", ft_itoa(nbr));
	nbr = -1;
	printf("%s\n", ft_itoa(nbr));
	nbr = 0;
	printf("%s\n", ft_itoa(nbr));
	nbr = 1;
	printf("%s\n", ft_itoa(nbr));
	nbr = 2147483647;
	printf("%s\n", ft_itoa(nbr));
	return (0);
}