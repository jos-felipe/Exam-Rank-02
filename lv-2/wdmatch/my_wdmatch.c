#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
	str++;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	*charset;
	int		i;

	i = 0;
	if (argc == 3)
	{
		str = argv[1];
		charset = argv[2];
		charset = ft_strchr(charset, str[i]);
		while (charset && str[i])
		{
			i++;
			charset = ft_strchr(charset, str[i]);
		}
	}
	if (str[i] == '\0');
		ft_putstr(str);
	ft_putchar('\n');
	return (0);
}