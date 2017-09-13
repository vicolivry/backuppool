/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 15:18:02 by volivry           #+#    #+#             */
/*   Updated: 2017/09/13 20:14:16 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '0')
	{
		if (str[i] != to_find[j])
			j = 0;
		if (str[i] == to_find[j])
		{
			if (j == ft_strlen(to_find) - 1)
				return (str + (i - j));
			j++;
		}
		i++;
	}
	return (NULL);
}
