/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:38:20 by chason            #+#    #+#             */
/*   Updated: 2022/05/02 09:32:01 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen73(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat73(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*result;
	unsigned int	len_result;
	int				i;

	len_result = 1;
	i = -1;
	while (++i < size)
		len_result += ft_strlen73(strs[i]);
	if (size)
		len_result += ft_strlen73(sep) * (size - 1);
	result = (char *) malloc(sizeof(char) * len_result);
	if (!result)
		return (0);
	result[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat73(result, strs[i]);
		if (i < size - 1)
			ft_strcat73(result, sep);
		i++;
	}
	return (result);
}
