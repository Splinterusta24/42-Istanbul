/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:35:03 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/15 16:54:17 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;

	if (!dst && !src)
		return (NULL);
	counter = 0;
	while (counter < n)
	{
		((char *)dst)[counter] = ((char *)src)[counter];
		counter++;
	}
	return (dst);
}
