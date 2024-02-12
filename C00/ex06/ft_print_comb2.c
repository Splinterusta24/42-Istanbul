/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:33:52 by nakbas            #+#    #+#             */
/*   Updated: 2024/01/30 17:09:22 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b)
{
	ft_write(48 + a / 10);
	ft_write(48 + a % 10);
	ft_write(' ');
	ft_write(48 + b / 10);
	ft_write(48 + b % 10);
	if (a == 98 && b == 99)
		ft_write(' ');
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}
