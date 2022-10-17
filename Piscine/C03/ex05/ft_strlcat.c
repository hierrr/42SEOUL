/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:59:08 by chason            #+#    #+#             */
/*   Updated: 2022/04/21 18:26:59 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen35(char *str)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = ft_strlen35(dest);
	len_src = ft_strlen35(src);
	if (size <= len_dest)
		return (size + len_src);
	else
	{
		while (len_dest + i < size - 1 && src[i] != '\0')
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
		return (len_dest + len_src);
	}
}
