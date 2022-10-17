/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:46:59 by chason            #+#    #+#             */
/*   Updated: 2022/05/05 17:49:05 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap_tab(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_swap_tab(&tab[i], &tab[i + 1]);
			i++;
		}
		end--;
	}
}
