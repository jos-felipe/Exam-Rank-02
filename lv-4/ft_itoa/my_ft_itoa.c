#include <stdlib.h>

int	ft_nbrlen(int nbr)
{
	int	len = 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res = (char *)malloc(12);
	int		len = ft_nbrlen(nbr);

	if(nbr == -2147483648)
		return ("-2147483648");
	if (nbr == 0)
		return ("0");
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
		len++;
	}
	res[len] = '\0';
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}