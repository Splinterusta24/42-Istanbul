/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:03:36 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/15 18:09:42 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	p = (char *)malloc(i * sizeof (char) + 1);
	while (j < i)
	{
		*(p + j) = src[j];
		j++;
	}
	*(p + j) = 0;
	return (p);
}
