/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:23:36 by chason            #+#    #+#             */
/*   Updated: 2022/04/21 11:59:01 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen34(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

int	ft_strncmp34(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = ft_strlen34(to_find);
	if (l == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp34(&str[i], to_find, l) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
