#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end);

int	main(void)
{
	int	start = 0;
	int	end = -3;
	int	len = abs(end - start) + 1;
	int	i = 0;
	int *res = ft_range(start, end);;

	while (i < len)
		printf("%d\n", res[i++]);
	return (0);
}