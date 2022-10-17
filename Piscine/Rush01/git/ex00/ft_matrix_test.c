/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:24:31 by chason            #+#    #+#             */
/*   Updated: 2022/04/24 21:24:32 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int base, int exp)
{
	int	result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

int	ft_matrix_test_inrow(int **matrix)
{
	int	row;
	int	col;
	int	check;

	row = 0;
	while (row < 4)
	{
		col = 0;
		check = 0;
		while (col < 4)
		{
			check += ft_pow(10, matrix[row][col]);
			col++;
		}
		if (check != 11110)
			return (0);
		else
			row++;
	}
	return (1);
}

int	ft_matrix_test_incol(int **matrix)
{
	int	row;
	int	col;
	int	check;

	col = 0;
	while (col < 4)
	{
		row = 0;
		check = 0;
		while (row < 4)
		{
			check += ft_pow(10, matrix[row][col]);
			row++;
		}
		if (check != 11110)
			return (0);
		else
			col++;
	}
	return (1);
}

int	ft_matrix_test(int **matrix)
{
	if (ft_matrix_test_inrow(matrix) || ft_matrix_test_incol(matrix))
		return (1);
	else
		return (0);
}
