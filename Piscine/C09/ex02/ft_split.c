/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:53:17 by chason            #+#    #+#             */
/*   Updated: 2022/05/03 18:18:23 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		else
			charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	wcnt;

	wcnt = 0;
	while (*str)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		if (*str && !ft_is_sep(*str, charset))
			wcnt++;
		while (*str && !ft_is_sep(*str, charset))
			str++;
	}
	return (wcnt);
}

char	*ft_putword(char *str, char *charset)
{
	char	*word;
	int		ccnt;
	int		i;

	ccnt = 0;
	while (str[ccnt] && !ft_is_sep(str[ccnt], charset))
		ccnt++;
	if (ccnt)
	{
		word = (char *) malloc(sizeof(char) * (ccnt + 1));
		if (!word)
			return (0);
		i = 0;
		while (str[i] && i < ccnt)
		{
			word[i] = str[i];
			i++;
		}
		word[i] = '\0';
		return (word);
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		wcnt;
	int		i;

	wcnt = ft_count_words(str, charset);
	result = (char **) malloc(sizeof(char *) * (wcnt + 1));
	if (!result)
		return (0);
	result[wcnt] = 0;
	i = 0;
	while (*str && wcnt)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		result[i] = ft_putword(str, charset);
		while (*str && !ft_is_sep(*str, charset))
			str++;
		i++;
	}
	return (result);
}
