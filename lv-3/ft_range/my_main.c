#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end);

int	main(void)
{
	int	start;
	int	end;
	int	len;
	int	i;
	int *res;

	start = 0;
	end = -3;
	len = abs(end - start) + 1;
	i = 0;
	res = ft_range(start, end);
	while (i < len)
		printf("%i\n", res[i++]);
	return (0);
}