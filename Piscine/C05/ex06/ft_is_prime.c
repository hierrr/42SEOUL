/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:43:56 by chason            #+#    #+#             */
/*   Updated: 2022/04/26 15:55:16 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_int(int nb)
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

int	ft_is_prime(int nb)
{
	int	sqrt_nb;
	int	divisor;

	if (nb <= 1)
		return (0);
	sqrt_nb = ft_sqrt_int(nb);
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
