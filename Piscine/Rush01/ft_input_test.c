/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chason <hieronimus92@student.42se>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:21:02 by chason            #+#    #+#             */
/*   Updated: 2022/04/24 21:23:04 by chason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_input_test(int argc, char *input)
{
	int	count;

	count = 0;
	if (argc != 2)
		return (0);
	else
	{
		while (input[count])
		{
			if (count % 2 == 0
				&& (input[count] < '1' || input[count] > '4'))
				return (0);
			else if (count % 2 == 1 && (input[count] != ' '))
				return (0);
			count++;
		}
	}
	if (count != 31)
		return (0);
	else
		return (1);
}

int	ft_cmp_input(char *make_input, char *input)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (make_input[i] != input[i * 2])
			return (0);
		i++;
	}
	return (1);
}
