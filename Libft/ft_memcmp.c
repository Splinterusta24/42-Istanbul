/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:14:20 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/16 18:14:22 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)str1)[i] != ((unsigned char *)str2)[i]))
			return (((unsigned char *)str1)[i]
				- ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
