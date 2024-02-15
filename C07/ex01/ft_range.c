/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:06:49 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/14 19:52:19 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	i;
	int	*p;

	i = 0;
	length = max - min;
	if (length <= 0)
		return (0);
	p = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		*(p + i) = min + i;
		i++;
	}
	return (p);
}
