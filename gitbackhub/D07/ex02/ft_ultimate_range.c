/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:23:51 by volivry           #+#    #+#             */
/*   Updated: 2017/09/21 16:47:24 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *tab;

	tab = NULL;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		tab[i] = min + 1;
		i++;
	}
	*range = tab;
	return (i);
}
