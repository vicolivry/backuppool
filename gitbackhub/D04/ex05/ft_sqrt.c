/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:10:42 by volivry           #+#    #+#             */
/*   Updated: 2017/09/12 14:44:25 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	if (nb <= 0 || nb > 2147483647)
		return (0);
	else if (nb == 1)
		return (1);
	while (i <= nb / i  && i < 4634)
	{
		if (i * i == nb)
		{	
			if (nb % i == 0)
				result = nb / i;
			else
				result = 0;
		}
		i++;
	}
	return (result);
}