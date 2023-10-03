#include <stddef.h>

const char	*ft_strchr(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
			return (str);
	return (NULL);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (ft_strchr(accept, s[i]))
		i++;
	return (i);
}