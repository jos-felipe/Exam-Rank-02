#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}


int	main(int argc, char *argv[])
{
	char	*str;
	
	if(argc == 2)
	{
		str = argv[1];
		while(ft_isspace(*str))
			str++;
		while(*str && !ft_isspace(*str))
			ft_putchar(*str++);
	}
	ft_putchar('\n');
	return (0);
}