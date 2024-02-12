/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:39:49 by nakbas            #+#    #+#             */
/*   Updated: 2024/01/31 12:28:55 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_big_number(int nb)
{
	char	bn[10];
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (nb == 0)
		write(1, "0", 1);
	while (nb > 0)
	{
		a = nb % 10;
		bn[i] = a + '0';
		nb = nb / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &bn[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		ft_big_number(nb);
	else if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else
	{
		nb = -nb;
		write(1, "-", 1);
		ft_big_number(nb);
	}
}
