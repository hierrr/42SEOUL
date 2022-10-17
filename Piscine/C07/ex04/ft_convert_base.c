/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:33:13 by chason            #+#    #+#             */
/*   Updated: 2022/05/03 15:42:16 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base74(long long nbr, char *base, int l);

int	ft_lenbase74(char *base)
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

int	ft_find_inbase74(char nbr, char *base, int l)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != nbr)
		i++;
	if (i == l)
		return (-1);
	else
		return (i);
}

int	ft_sign74(char *str, int *i)
{
	int	sign;

	sign = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32
		|| str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		*i += 1;
	}
	return (sign);
}

int	ft_atoi_base74(char *str, char *base, int l)
{
	int	sign;
	int	i;
	int	result;

	i = 0;
	sign = ft_sign74(str, &i);
	result = 0;
	while (str[i])
	{
		if (ft_find_inbase74(str[i], base, l) == -1)
			break ;
		result = (result * l) + (ft_find_inbase74(str[i], base, l));
		i++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	atoi;
	int	len_base_from;
	int	len_base_to;

	len_base_from = ft_lenbase74(base_from);
	len_base_to = ft_lenbase74(base_to);
	if (len_base_from < 2 || len_base_to < 2)
		return (NULL);
	atoi = ft_atoi_base74(nbr, base_from, len_base_from);
	return (ft_putnbr_base74(atoi, base_to, len_base_to));
}
