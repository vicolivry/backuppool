/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 17:29:52 by volivry           #+#    #+#             */
/*   Updated: 2017/09/18 11:36:33 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_checkchar(char *str, int argc)
{
	int	i;

	i = 0;
	if (argc != 10)
		return (0);
	if (ft_strlen(str) != 9)
		return (0);
	while (str[i])
	{
		if ((str[i] > '9' || str[i] < '1') && str[i] != '.')
			return (0);
		i++;
	}
	return (1);
}
