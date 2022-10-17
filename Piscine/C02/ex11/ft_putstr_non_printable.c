/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printalbe.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:58:16 by chason            #+#    #+#             */
/*   Updated: 2022/05/05 15:49:26 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex_base[(unsigned char)*str / 16], 1);
			write(1, &hex_base[(unsigned char)*str % 16], 1);
		}
		str++;
	}
}
