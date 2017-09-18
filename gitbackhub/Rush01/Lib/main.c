/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 14:56:20 by volivry           #+#    #+#             */
/*   Updated: 2017/09/18 17:54:28 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_checkchar(char *str, int argc);

void	ft_putchar(char c);

int		ft_atoi_modified(char *str);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	ft_special_putstr(int *tab);

int ft_safe_nb(int grid[9][9], int x, int y, int nb);

void	ft_fill_grid(int grid[9][9], char **argv)
{
	int	line;
	int	col;

	line = 1;
	col = 0;
	while (line < 10)
	{
		while (col <= 9)
		{
			if (argv[line][col] == '.')
				grid[line - 1][col] = 0;
			else if (argv[line][col] >= '1' && argv[line][col] <= '9')
				grid[line - 1][col] = argv[line][col] - '0';
			col++;
		}
		col = 0;
		line++;
	}
}

int		ft_find_unassigned(int grid[9][9], int *l, int *c)
{	int x;
	int y;

		while (*l < 9)
	{
		while (*c < 9)
		{
			if (grid[*l][*c] == 0)
				return (1);
			*c = *c + 1;
		}
		*c = 0;
		*l = *l + 1;
	}
	return (0);
}

int		ft_solve_sudoku(int grid[9][9])
{
	int line;
	int col;
	int number;


	line = 0;
	col = 0;
	if (ft_find_unassigned(grid, &line, &col) == 0)
		return (1);
	number = 1;
	while (number <= 9)
	{
		if (ft_safe_nb(grid, line, col, number) == 1)
		{
			grid[line][col] = number;
			if (ft_solve_sudoku(grid) == 1)
			{
				printf("Sudoku resolu");
				return (1);
			}
		}
		grid[line][col] = number;
		number++;
	}
	printf("sudoku non resolu");
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int grid[9][9];

	i = 0;
	j = 0;
	while (j < argc - 1)
	{
		if (ft_checkchar(argv[j + 1], argc) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		j++;
	}
	ft_fill_grid(grid, argv);
//	if (ft_solve_sudoku(grid) == 0)
//	{
//		ft_putstr("Error\n");
//		return (0);
//	}
//	else
		if (ft_solve_sudoku(grid))
		{
		while (i < argc - 1)
		{
			ft_special_putstr(grid[i]);
			ft_putchar('\n');
			i++;
		}
		}
	return (0);
}

