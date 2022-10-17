/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:31:07 by chason            #+#    #+#             */
/*   Updated: 2022/04/24 21:31:08 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "headers.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_test(int **matrix, char *input)
{
	char	*make_input;

	if (ft_matrix_test(matrix))
	{
		make_input = (char *)malloc(sizeof(char) * 16);
		ft_make_input(matrix, make_input);
		if (ft_cmp_input(make_input, input))
			return (1);
	}
	return (0);
}

void	ft_print_matrix(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(matrix[i][j] + '0');
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	***matrix_arr;

	if (ft_input_test(argc, argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	matrix_arr = (int ***)malloc(sizeof(int **) * 2000);
	i = 0;
	while (i < 2000)
	{
		matrix_arr[i] = (int **)malloc(sizeof(int *) * 4);
		j = 0;
		while (j < 4)
		{
			matrix_arr[i][j] = (int *)malloc(sizeof(int) * 4);
			j++;
		}
		i++;
	}
	ft_put_matrix(matrix_arr);
	i = 0;
	while (i < 2000)
	{
		if (ft_print_test(matrix_arr[i], argv[1]) == 1)
		{
			ft_print_matrix(matrix_arr[i]);
			return (0);
		}
		else
			i++;
	}
	write(1, "Arror\n", 6);
	return (0);
}
