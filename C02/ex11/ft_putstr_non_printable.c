/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:04:16 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/07 20:32:42 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= ' ' && c != 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	current;

	i = 0;
	while (str[i])
	{
		current = str[i];
		if (ft_char_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		i++;
	}
}
