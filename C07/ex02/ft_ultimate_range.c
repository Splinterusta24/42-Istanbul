/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:53:04 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/14 19:53:05 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		index;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	d = (int *)malloc(bound * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	index = 0;
	while (index < bound)
	{
		d[index] = min + index;
		index++;
	}
	return (bound);
}
