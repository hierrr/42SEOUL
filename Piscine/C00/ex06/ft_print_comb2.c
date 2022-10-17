/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:37:02 by chason            #+#    #+#             */
/*   Updated: 2022/04/16 15:25:59 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_two_nums(int num1, int num2)
{
	ft_putchar(num1 / 10 + '0');
	ft_putchar(num1 % 10 + '0');
	write(1, " ", 1);
	ft_putchar(num2 / 10 + '0');
	ft_putchar(num2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_two_nums(num1, num2);
			if (num1 == 98 && num2 == 99)
				break ;
			write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
