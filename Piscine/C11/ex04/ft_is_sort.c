/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:49:14 by chason            #+#    #+#             */
/*   Updated: 2022/05/05 16:14:30 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	order;
	int	i;

	order = 0;
	i = 0;
	while (!order && i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			order = 1;
		else if ((*f)(tab[i], tab[i + 1]) < 0)
			order = -1;
		i++;
	}
	while (order && i < length - 1)
	{
		if (order * (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
