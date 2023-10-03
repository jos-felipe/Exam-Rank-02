#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);

int	main(void)
{
	int	i;
	int	j;
	char	*s;
	char	*charset;

	s = "felipe";
	charset = "fe";
	i = 0;
	// j = strspn(s, charset);
	j = ft_strspn(s, charset);
	while (i < j)
		putchar(s[i++]);
	return (0);
}
