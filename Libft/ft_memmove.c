/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:31:34 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/16 19:23:25 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (NULL);
	counter = 0 ;
	if (src > dst)
	{
		while (counter < len)
		{
			*(((char *)dst) + counter) = *(((char *)src) + counter);
			counter++;
		}
		return (dst);
	}
	else
	{
		while (counter < len)
		{
			*(((char *)dst) + len - 1)
				= *(((char *)src) + len - 1);
			len--;
		}
		return (dst);
	}
}
