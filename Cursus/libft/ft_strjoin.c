/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <chason@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:54:50 by chason            #+#    #+#             */
/*   Updated: 2022/07/22 00:34:59 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	d = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s1[i] && i < s1_len)
	{
		d[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < s2_len)
		d[i++] = s2[j++];
	d[i] = '\0';
	return (d);
}
