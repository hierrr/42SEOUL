/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:37:24 by chason            #+#    #+#             */
/*   Updated: 2022/04/18 22:45:06 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(char *nums, int n, int index, int num)
{
	if (index == n)
	{
		write(1, nums, n);
		if (nums[0] != 10 - n + '0')
			write(1, ", ", 2);
	}
	else
	{
		while (num < 10)
		{
			nums[index] = num + '0';
			recursive(nums, n, index + 1, num + 1);
			num++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	nums[10];

	if (n > 0 && n < 10)
		recursive(nums, n, 0, 0);
}

int main()
{
	ft_print_combn(3);
	return 0;
}
