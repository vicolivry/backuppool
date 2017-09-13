int ft_ strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_str_is_alpha(char *str)
{
	int	i;

	i = 0
	if (ft_strlen(str) == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= 64 || (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
			return(0);
		i++;
	}		
	return (1)
}
