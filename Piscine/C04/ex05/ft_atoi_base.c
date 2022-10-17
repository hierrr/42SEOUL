/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:53:04 by chason            #+#    #+#             */
/*   Updated: 2022/05/04 17:10:40 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lenbase45(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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

int	ft_find_inbase(char nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
		*i += 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		*i += 1;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	l;
	int	sign;
	int	i;
	int	result;

	l = ft_lenbase45(base);
	i = 0;
	sign = ft_sign(str, &i);
	if (l < 2)
		return (0);
	result = 0;
	while (str[i])
	{
		if (ft_find_inbase(str[i], base) == -1)
			break ;
		result = (result * l) + (ft_find_inbase(str[i], base));
		i++;
	}
	return (result * sign);
}
