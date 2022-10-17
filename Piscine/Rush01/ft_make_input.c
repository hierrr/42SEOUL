/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:23:23 by chason            #+#    #+#             */
/*   Updated: 2022/04/24 21:23:25 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_up(int **matrix, char *make_input, int row, int col)
{
	int	count;
	int	temp;

	while (col < 4)
	{
		count = 1;
		temp = matrix[row][col];
		while (row < 3)
		{
			if (matrix[row + 1][col] == 4)
			{
				count++;
				break ;
			}
			else if (temp < matrix[row + 1][col])
			{
				count++;
				temp = matrix[row + 1][col];
			}
			row++;
		}
		make_input[col] = count + '0';
		col++;
		row = 0;
	}
}

void	col_down(int **matrix, char *make_input, int row, int col)
{
	int	count;
	int	temp;

	while (col < 4)
	{
		count = 1;
		temp = matrix[row][col];
		while (row > 0)
		{
			if (matrix[row - 1][col] == 4)
			{
				count++;
				break ;
			}
			else if (temp < matrix[row - 1][col])
			{
				count++;
				temp = matrix[row - 1][col];
			}
			row--;
		}
		make_input[4 + col] = count + '0';
		col++;
		row = 3;
	}
}

void	row_left(int **matrix, char *make_input, int row, int col)
{
	int	count;
	int	temp;

	while (row < 4)
	{
		count = 1;
		temp = matrix[row][col];
		while (col < 3)
		{
			if (matrix[row][col + 1] == 4)
			{
				count++;
				break ;
			}
			else if (temp < matrix[row][col + 1])
			{
				count++;
				temp = matrix[row][col + 1];
			}
			col++;
		}
		make_input[8 + row] = count + '0';
		row++;
		col = 0;
	}
}

void	row_right(int **matrix, char *make_input, int row, int col)
{
	int	count;
	int	temp;

	while (row < 4)
	{
		count = 1;
		temp = matrix[row][col];
		while (col > 0)
		{
			if (matrix[row][col - 1] == 4)
			{
				count++;
				break ;
			}
			else if (temp < matrix[row][col - 1])
			{
				count++;
				temp = matrix[row][col - 1];
			}
			col--;
		}
		make_input[12 + row] = count + '0';
		row++;
		col = 3;
	}
}

void	ft_make_input(int **matrix, char *make_input)
{
	col_up(matrix, make_input, 0, 0);
	col_down(matrix, make_input, 3, 0);
	row_left(matrix, make_input, 0, 0);
	row_right(matrix, make_input, 0, 3);
}
