/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:10:39 by volivry           #+#    #+#             */
/*   Updated: 2017/09/15 10:22:56 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		base_check(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i])
	{
		while (str[j])
		{
			if (str[i] == str[j])
				k = 1;
			j++;
		}
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 43 || str[i] == 45
				|| str[i] == 127)
			k = 1;
		i++;
	}
	return (k);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;

	len = ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (len > 1 && base_check(base) == 0)
	{
		if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			nbr %= len;
		}
		ft_putchar(base[nbr]);
	}
}

int		main()
{
	ft_putnbr_base(1238, "A+BCD");
	return (0);
}
