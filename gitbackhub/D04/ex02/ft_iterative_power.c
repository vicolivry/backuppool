/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:55:32 by volivry           #+#    #+#             */
/*   Updated: 2017/09/11 15:22:02 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = nb;
	if (power == 0)
		return(1);
	if (power < 0)
		return (0);
	while(i < power)
	{
		nb = nb * 1 *  tmp;
		i++;
	}
	return (nb);
}
