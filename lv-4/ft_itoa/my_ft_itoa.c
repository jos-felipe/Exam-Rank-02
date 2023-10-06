#include <stdlib.h>

int	ft_nbrlen(int nbr)
{
	int	len;

	nbr /= 10;
	len = 1;
	while (abs(nbr))
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;

	len = ft_nbrlen(nbr);
	str = (char *)malloc(sizeof(char) * len);
	return (str);
}