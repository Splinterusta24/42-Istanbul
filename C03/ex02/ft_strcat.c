/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:28:38 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/08 16:52:20 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
