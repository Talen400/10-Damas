/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:08:10 by tlavared          #+#    #+#             */
/*   Updated: 2026/01/27 19:08:11 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_arr(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		fprintf(stdout, "%d", arr[i]);
		if (i < len - 1)
			fprintf(stdout, " ");
		i++;
	}
	fprintf(stdout, "\n");
}

int	is_valid(int *arr, int col, int row)
{
	int	curr_col;
	int	curr_row;

	curr_col = 0;
	while (curr_col < col)
	{
		curr_row = arr[curr_col];
		if (curr_row == row)
			return (0);
		if (curr_row + curr_col == row + col)
			return (0);
		if (curr_row - curr_col == row - col)
			return (0);
		curr_col++;
	}
	return (1);
}

void	solve(int *arr, int col, int len)
{
	int	row;

	if (col == len)
	{
		print_arr(arr, len);
		return ;
	}
	row = 0;
	while (row < len)
	{
		if (is_valid(arr, col, row))
		{
			arr[col] = row;
			solve(arr, col + 1, len);
		}
		row++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	len;
	int	*arr;

	if (argc != 2)
		return (1);
	len = atoi(argv[1]);
	arr = malloc (len * sizeof(int ));
	solve(arr, 0, len);
	free(arr);
	return (0);
}
