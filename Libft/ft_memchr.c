/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:04:14 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/15 17:14:34 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)str)[counter] == ((unsigned char)c))
			return ((void *)(str + counter));
		counter++;
	}
	return (NULL);
}
