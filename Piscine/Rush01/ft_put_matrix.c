/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:29:40 by chason            #+#    #+#             */
/*   Updated: 2022/04/24 21:41:36 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers.h"

void	ft_make_line_arr(int n, int *num_arr, int **line_arr);
void	ft_make_matrix_arr(int l, int **line_arr, int ***matrix_arr);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_put_matrix(int ***matrix_arr)
{
	int	i;
	int	*num_arr;
	int	**line_arr;

	num_arr = (int *)malloc(sizeof(int) * 4);
	line_arr = (int **)malloc(sizeof(int *) * 24);
	i = 0;
	while (i < 24)
	{
		line_arr[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
	ft_make_line_arr(0, num_arr, line_arr);
	ft_make_matrix_arr(0, line_arr, matrix_arr);
}

void	ft_make_line_arr(int n, int *num_arr, int **line_arr)
{
	int	i;
	int	j;

	if (n == 4)
	{
		j = 0;
		while (line_arr[j][0] != 0)
			j++;
		i = 0;
		while (i < 4)
		{
			line_arr[j][i] = num_arr[i];
			i++;
		}
	}
	j = n;
	while (j < 4)
	{
		ft_swap(&num_arr[j], &num_arr[n]);
		ft_make_line_arr(n + 1, num_arr, line_arr);
		ft_swap(&num_arr[j], &num_arr[n]);
		j++;
	}
}

void	ft_make_matrix_arr(int l, int **line_arr, int ***matrix_arr)
{
	int	i;
	int	j;
	int	s;

	if (l == 3)
	{
		s = 0;
		while (matrix_arr[s][0][0] != 0)
			s++;
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				matrix_arr[s][i][j] = line_arr[i][j];
				j++;
			}
			i++;
		}
	}
	j = l;
	while (j < 24)
	{
		ft_swap(line_arr[j], line_arr[l]);
		ft_make_matrix_arr(l + 1, line_arr, matrix_arr);
		ft_swap(line_arr[j], line_arr[l]);
		j++;
	}
}
