/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <chason@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:36:41 by chason            #+#    #+#             */
/*   Updated: 2022/07/22 00:34:39 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static char	**ft_putword_tab(char const *s, char c, char **tab, size_t cnt)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < cnt)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			tab[i] = ft_substr(s, 0, j);
			if (!tab[i])
				return (ft_malloc_error(tab));
			s += j;
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

static size_t	ft_count_word(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			cnt++;
		while (*s && *s != c)
			s++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	cnt;

	if (!s)
		return (NULL);
	cnt = ft_count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!tab)
		return (NULL);
	return (ft_putword_tab(s, c, tab, cnt));
}
