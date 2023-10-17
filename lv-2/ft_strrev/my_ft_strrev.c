int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *str, int i, int j)
{
	char	tmp = str[i];
	str[i] = str[j];
	str[j] = tmp;
}

char	*ft_strrev(char *str)
{
	int	len = ft_strlen(str);
	int	i = 0;
	int j = len - 1;

	while (i < len / 2)
		ft_swap(str, i++, j--);
	return (str);
}