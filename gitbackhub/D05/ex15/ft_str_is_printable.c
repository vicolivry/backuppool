int ft_strlen(char *str)
{
	int	i;

	i = 0
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (strlen(str) == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32)
			return(0);
		i++;
	}
	return (1);
}
