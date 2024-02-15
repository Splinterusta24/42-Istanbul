/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:14:11 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/15 18:09:06 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	int		i;
	int		j;
	int		x;

	i = 0;
	x = 0;
	buffer = (char *)malloc(sizeof(strs) + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			buffer[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			buffer[x++] = sep[j++];
		i++;
	}
	buffer[x] = '\0';
	return (buffer);
}

int main() {
    char *buffer;
    char *sep = "-";
    char *strs[] = {"yigit", "nedim", "kaan"};

    // ft_strjoin fonksiyonunu çağırarak birleştirilmiş stringi alın
    buffer = ft_strjoin(3, strs, sep);

    // Sonuç olarak elde edilen string'i ekrana yazdırın
    printf("%s\n", buffer);

    // Bellek sızıntısını önlemek için buffer'a ayrılan belleği serbest bırakın
    free(buffer);

    return 0;
}