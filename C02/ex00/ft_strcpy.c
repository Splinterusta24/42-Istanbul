/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 04:33:11 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/04 06:26:43 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_char(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = count_char(dest);
	y = count_char(src);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (x > y)
		dest[i] = '\0';
	return (dest);
}
