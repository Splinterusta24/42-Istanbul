/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:20:05 by nakbas            #+#    #+#             */
/*   Updated: 2024/11/15 17:45:14 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[counter])
	{
		if (s[counter] == (char)c)
			return (((char *)&s[counter]));
		counter++;
	}
	return (NULL);
}
