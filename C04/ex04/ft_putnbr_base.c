/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:26:59 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/13 13:43:02 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	putnbr(long nbr, int len, char *base)
{
	if (0 <= nbr && nbr < len)
	{
		putchar(base[nbr]);
	}
	else if (nbr >= len)
	{
		putnbr(nbr / len, len, base);
		putnbr(nbr % len, len, base);
	}
	else
	{
		nbr *= -1;
		putchar('-');
		putnbr(nbr, len, base);
	}
}

int	is_correct(char *base)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	i = 0;
	len = base_len(base);
	if (base[i] == '\0' || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = 1;
		while ((i + j) <= len)
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	error;
	int	len;

	error = 0;
	i = 0;
	len = base_len(base);
	error = is_correct(base);
	if (error == 1)
	{
		putnbr(nbr, len, base);
	}
}
