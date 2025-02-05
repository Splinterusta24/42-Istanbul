/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:27:58 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/15 15:34:51 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;
	char	*ptr;

	counter = 0;
	ptr = (char *)b;
	while (counter != len)
	{
		ptr[counter] = c;
		counter++;
	}
	return (b);
}
