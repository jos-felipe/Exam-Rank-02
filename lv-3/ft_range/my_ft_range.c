#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = abs(end - start) + 1;
	res	= (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		res[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (res);
}