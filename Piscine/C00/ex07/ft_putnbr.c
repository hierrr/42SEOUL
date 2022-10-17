/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:09:37 by chason            #+#    #+#             */
/*   Updated: 2022/04/16 18:42:41 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	recursive(unsigned int num)
{
	int	recurse;
	int	print;

	recurse = num / 10;
	print = num % 10;
	if (num < 10)
	{
		ft_putchar(print + '0');
		return (0);
	}
	recursive(recurse);
	ft_putchar(print + '0');
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		recursive(-nb);
	}
	else
		recursive(nb);
}
