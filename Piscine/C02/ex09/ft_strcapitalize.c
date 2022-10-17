/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:55:44 by chason            #+#    #+#             */
/*   Updated: 2022/04/25 17:28:56 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_capital(char *str, int i)
{
	if ((str[i - 1] > 8 && str[i - 1] < 14)
		|| (str[i - 1] > 31 && str[i - 1] < 48)
		|| (str[i - 1] > 57 && str[i - 1] < 65)
		|| (str[i - 1] > 90 && str[i - 1] < 97)
		|| (str[i - 1] > 122 && str[i - 1] < 127))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ft_str_is_capital(str, i) == 1)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0 && ft_str_is_capital(str, i) == 0)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
