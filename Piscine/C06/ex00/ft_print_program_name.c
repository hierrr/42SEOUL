/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:44:43 by chason            #+#    #+#             */
/*   Updated: 2022/04/27 15:24:26 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen60(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr60(char *str)
{
	write(1, str, ft_strlen60(str));
}

int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		ft_putstr60(*argv);
		write(1, "\n", 1);
		return (0);
	}
}
