/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:53:54 by chason            #+#    #+#             */
/*   Updated: 2022/04/18 10:54:02 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	r;
	int	temp;

	i = 0;
	r = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[r];
		tab[r] = temp;
		i++;
		r--;
	}
}
