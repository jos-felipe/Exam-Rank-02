#include <stdlib.h>

int	ft_nbrlen(int nbr)
{
	int	len;

	len = 1;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	if(nbr == -2147483648)
		return ("-2147483648");
	if (nbr == 0)
		return ("0");
	res = (char *)malloc(sizeof(char) * 12);
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	len = ft_nbrlen(nbr);
	res[len] = '\0';
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}