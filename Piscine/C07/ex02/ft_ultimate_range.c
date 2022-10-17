/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:10:38 by chason            #+#    #+#             */
/*   Updated: 2022/04/28 22:38:57 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*range2;
	int	i;

	if (min >= max)
	{
		*range = (void *) NULL;
		return (0);
	}
	range2 = (int *) malloc(sizeof(*range2) * (max - min));
	if (!range2)
		return (-1);
	i = 0;
	while (min < max)
	{
		range2[i] = min;
		i++;
		min++;
	}
	*range = range2;
	return (i);
}
