/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <chason@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:55:02 by chason            #+#    #+#             */
/*   Updated: 2022/07/22 01:10:15 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	size;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((unsigned int)s_len <= start)
		return (ft_strdup(""));
	size = (unsigned int)s_len - start;
	if (size > len)
		size = len;
	d = (char *)malloc(sizeof(char) * (size + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (i < size)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
