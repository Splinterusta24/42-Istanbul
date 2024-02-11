/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:08:50 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/03 23:57:53 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				x = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = x;
			}
			j++;
		}
		i++;
	}
}
