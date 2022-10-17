/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:10:55 by chason            #+#    #+#             */
/*   Updated: 2022/04/30 15:29:22 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lenbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_print_putnbr_base(long long nbr, char *base, int len_base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < len_base)
		write(1, &base[nbr], 1);
	else
	{
		ft_print_putnbr_base(nbr / len_base, base, len_base);
		ft_print_putnbr_base(nbr % len_base, base, len_base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_lenbase(base);
	if (len_base < 2)
		return ;
	else
		ft_print_putnbr_base(nbr, base, len_base);
}
