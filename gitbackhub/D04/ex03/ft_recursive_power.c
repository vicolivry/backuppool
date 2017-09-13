/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:23:22 by volivry           #+#    #+#             */
/*   Updated: 2017/09/11 15:45:23 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

int	main(void)
{
	printf ("%d\n", ft_recursive_power(2, 0));
	return (0);
}
