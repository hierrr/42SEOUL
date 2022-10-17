/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:57:30 by chason            #+#    #+#             */
/*   Updated: 2022/04/20 16:32:02 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap18(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	end;

	end = size - 1;
	while (end > 0)
	{
		i = 0;
		while (i < end)
		{
			if (tab[i] > tab[i + 1])
				ft_swap18(&tab[i], &tab[i + 1]);
			i++;
		}
		end--;
	}
}
