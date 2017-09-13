/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:38:07 by volivry           #+#    #+#             */
/*   Updated: 2017/09/11 15:21:29 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ( nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
		if (nb > 1)
		{
			return (nb * ft_recursive_factorial(nb -1));
		}
		return (nb);
}
