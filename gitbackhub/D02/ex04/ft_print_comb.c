/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:15:53 by volivry           #+#    #+#             */
/*   Updated: 2017/09/13 10:18:07 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_result(int i, int j, int k)
{
	if (i < j && j < k)
	{
		ft_putchar('0' + i);
		ft_putchar('0' + j);
		ft_putchar('0' + k);
		if (i != 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				ft_print_result(i, j, k);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
