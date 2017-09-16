/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 19:29:01 by volivry           #+#    #+#             */
/*   Updated: 2017/09/16 21:05:10 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] -s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char *tab1, char *tab2)
{
	char tmp;

	tmp = *tab1;
	*tab1 = *tab2;
	*tab2 = tmp;
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int k ;

	i = 0;
	j = 1;
	while (j < argc)
	{
		k = j + 1;
		while (k < argc)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
				ft_swap(argv[j], argv[k]);
			k++;
		}
		j++;
	}
	while (i < argc - 1)
	{
		ft_putstr(argv[i + 1]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
