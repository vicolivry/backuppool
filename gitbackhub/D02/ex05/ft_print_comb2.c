/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 08:55:14 by volivry           #+#    #+#             */
/*   Updated: 2017/09/13 12:12:20 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_result(int i, int j, int y, int z)
{
	if (i * 10 + j < y * 10 + z)
	{
		ft_putchar('0' + i);
		ft_putchar('0' + j);
		ft_putchar(' ');
		ft_putchar('0' + y);
		ft_putchar('0' + z);
		if (i != 9 || j != 8)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_count_numbers(int i, int j, int y, int z)
{
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (y <= 9)
			{
				while (z <= 9)
				{
					ft_print_result(i, j, y, z);
					z++;
				}
				z = 0;
				y++;
			}
			y = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int y;
	int z;

	i = 0;
	j = 0;
	y = 0;
	z = 1;
	ft_count_numbers(i, j, y, z);
}
