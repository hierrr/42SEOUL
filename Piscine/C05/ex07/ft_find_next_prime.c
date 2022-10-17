/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:44:19 by chason            #+#    #+#             */
/*   Updated: 2022/05/03 16:39:27 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt_int57(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt <= nb / sqrt)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		else
			sqrt++;
	}
	return (sqrt - 1);
}

int	ft_is_prime57(int nb)
{
	int	sqrt_nb;
	int	divisor;

	if (nb <= 1)
		return (0);
	sqrt_nb = ft_sqrt_int57(nb);
	divisor = 2;
	while (divisor <= sqrt_nb)
	{
		if (nb % divisor == 0)
			return (0);
		else
			divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime57(nb) != 1)
		nb++;
	return (nb);
}

int main()
{
	printf("%d\n", ft_find_next_prime(2147483640));
}
