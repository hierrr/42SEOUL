/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:01:27 by chason            #+#    #+#             */
/*   Updated: 2022/05/05 19:43:11 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put_addr(void *addr)
{
	unsigned long long		a;
	int						temp[16];
	int						i;
	char					*base;

	a = (unsigned long long)addr;
	i = 0;
	while (i < 15)
		temp[i++] = 0;
	while (a > 0)
	{
		temp[i--] = (a % 16);
		a /= 16;
	}
	i = 0;
	base = "0123456789abcdef";
	while (i < 16)
		write (1, &base[temp[i++]], 1);
	write(1, ": ", 2);
}

void	ft_put_data(void *addr, int cnt)
{
	char	*data;
	int		i;
	char	*base;

	data = (char *)addr;
	i = 0;
	base = "0123456789abcdef";
	while (i < cnt && i < 16)
	{
		write(1, &base[data[i] / 16], 1);
		write(1, &base[data[i] % 16], 1);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_put_str(void *addr, int cnt)
{
	char	*data;
	int		i;

	data = (char *)addr;
	i = 0;
	while (i < cnt && i < 16)
	{
		if (data[i] <= 32 || data[i] == 127)
			write(1, ".", 1);
		else
			write(1, &data[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				cnt;

	i = 0;
	cnt = size;
	while (i < size && cnt > 0)
	{
		ft_put_addr(addr + i);
		ft_put_data(addr + i, cnt);
		ft_put_str(addr + i, cnt);
		write(1, "\n", 1);
		i += 16;
		cnt -= 16;
	}
	return (addr);
}
