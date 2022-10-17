/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:11:45 by chason            #+#    #+#             */
/*   Updated: 2022/04/27 15:17:40 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen63(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr63(char *str)
{
	write(1, str, ft_strlen63(str));
}

void	ft_swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp63(char *s1, char *s2)
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

int	main(int argc, char **argv)
{
	int	i;
	int	end;

	end = argc - 1;
	while (end > 0)
	{
		i = 1;
		while (i < end)
		{
			if (ft_strcmp63(argv[i], argv[i + 1]) > 0)
				ft_swap_str(&argv[i], &argv[i + 1]);
			i++;
		}
		end--;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr63(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
