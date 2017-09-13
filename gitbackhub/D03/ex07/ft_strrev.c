/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:25:06 by volivry           #+#    #+#             */
/*   Updated: 2017/09/12 09:51:13 by volivry          ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		x;
	int		y;
	char	tmp;

	x = 0;
	y = ft_strlen(str) - 1;
	tmp = 0;
	while (x <= y)
	{
		tmp = str[y];
		str[y] = str[x];
		str[x] = tmp;
		x++;
		y--;
	}
	y = ft_strlen(str);
	str[y] = '\0';
	return (str);
}
