/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:33:15 by chason            #+#    #+#             */
/*   Updated: 2022/05/01 19:28:30 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_result(long long nbr, int l)
{
	long long	temp;
	int			cnt;

	temp = nbr;
	cnt = 0;
	if (temp == 0)
		return (1);
	if (temp < 0)
	{
		cnt++;
		temp *= -1;
	}
	while (temp > 0)
	{
		cnt++;
		temp /= l;
	}
	return (cnt);
}

char	*ft_putnbr_base74(long long nbr, char *base, int l)
{
	char	*result;
	int		cnt;

	cnt = ft_count_result(nbr, l);
	result = (char *) malloc(sizeof(char) * (cnt + 1));
	if (!result)
		return (0);
	if (nbr == 0)
		result[0] = base[0];
	else if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	result[cnt] = '\0';
	cnt--;
	while (nbr > 0)
	{
		result[cnt] = base[nbr % l];
		nbr /= l;
		cnt--;
	}
	return (result);
}
