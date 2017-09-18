/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_safe.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:41:33 by volivry           #+#    #+#             */
/*   Updated: 2017/09/18 17:47:32 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_safe_line_col(int grid[9][9], int x, int y, int nb)
{
	int cursor;

	cursor = 0;
	printf("ft safe line col\n");
	while (cursor < 9)
/*	{
		if (grid[x][cursor] == nb)
			return (0);
		cursor++;
	}
	cursor = 0;
	while (cursor < 9)
	{
		if (grid[cursor][y] == nb)
			return (0);
		cursor++;
	}
	*/
	{
		if (grid[x][cursor] == nb || grid[y][cursor] == nb)
			return (0);
		cursor++;
	}
	return (1);
}

int	ft_safe_small_grid(int grid[9][9], int x, int y, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("ft safe small grid x : %d y : %d\n",x, y);
	while (i <= 2)
	{
		while (j <= 2)
		{
			if (grid[x + i][y + j] == nb)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int ft_safe_nb(int grid[9][9],int x, int y, int nb)
{
	if (ft_safe_line_col(grid, x, y, nb) == 1
			&& ft_safe_small_grid(grid, (x - x % 3), (y - y % 3), nb) == 1)
		return (1);
	return (0);
}
