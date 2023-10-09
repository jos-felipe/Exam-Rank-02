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
		return("-2147483648");
	res = (char *)malloc(sizeof(char) * 12);
	if (!res)
		return (NULL);
	len = ft_nbrlen(nbr);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
		len++;
	}
	res[len] = '\0';
	while (len--)
	{
		res[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}