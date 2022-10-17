/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:56:23 by chason            #+#    #+#             */
/*   Updated: 2022/05/05 18:00:52 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_adv(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	i;
	int	end;

	size = 0;
	while (tab[size])
		size++;
	end = size - 1;
	while (end > 0)
	{
		i = 0;
		while (i < end)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
				ft_swap_adv(&tab[i], &tab[i + 1]);
			i++;
		}
		end--;
	}
}
