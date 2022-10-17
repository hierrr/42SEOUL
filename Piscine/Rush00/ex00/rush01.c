/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonilee <geonilee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:10:42 by geonilee          #+#    #+#             */
/*   Updated: 2022/04/16 13:48:15 by geonilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define LEFT_TOP '/'
#define RIGHT_TOP '\\'
#define LEFT_BOTTOM '\\'
#define RIGHT_BOTTOM '/'
#define MID_HORIZON '*'
#define MID_VERTICAL '*'

void	ft_putchar(char c);

void	print(int row, int col, int x, int y)
{
	if (col == 0)
	{
		if (row == 0)
			ft_putchar(LEFT_TOP);
		else if (row == y - 1)
			ft_putchar(LEFT_BOTTOM);
		else
			ft_putchar(MID_VERTICAL);
	}
	else if (col == x - 1)
	{
		if (row == 0)
			ft_putchar(RIGHT_TOP);
		else if (row == y - 1)
			ft_putchar(RIGHT_BOTTOM);
		else
			ft_putchar(MID_VERTICAL);
	}
	else if (row == 0 || row == y - 1)
		ft_putchar(MID_HORIZON);
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x < 1 || y < 1)
		write(1, "ERROR", 5);
	else
	{
		row = 0;
		while (row < y)
		{
			col = 0;
			while (col < x)
			{
				print(row, col, x, y);
				col++;
			}
			row++;
			ft_putchar('\n');
		}
	}
}
