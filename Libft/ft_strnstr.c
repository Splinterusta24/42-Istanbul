/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:49:37 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/15 19:07:45 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		if (ft_strlen(needle) > len)
			return (0);
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
