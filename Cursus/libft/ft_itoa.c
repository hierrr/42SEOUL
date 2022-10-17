/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <chason@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:36:25 by chason            #+#    #+#             */
/*   Updated: 2022/07/14 14:33:53 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	m;
	int			len;
	char		*str;

	m = (long long)n;
	len = ft_int_len(m);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (m == 0)
		str[0] = '0';
	else if (m < 0)
	{
		str[0] = '-';
		m *= -1;
	}
	while (m)
	{
		str[len--] = (m % 10) + '0';
		m /= 10;
	}
	return (str);
}
