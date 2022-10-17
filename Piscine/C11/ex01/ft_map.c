/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:25:46 by chason            #+#    #+#             */
/*   Updated: 2022/05/05 11:35:02 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}
