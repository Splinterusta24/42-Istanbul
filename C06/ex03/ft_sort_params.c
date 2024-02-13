/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:02:54 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/13 22:18:27 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		putchar(str[i++]);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	argc -= 1;
	if (argc > 1)
	{
		while (0 < argv[i])
		{
			j = 0;
			while (argv[argc][j] != '\0' && argc != 0)
			{
				putchar(argv[argc][j]);
				j++;
			}
			putchar('\n');
			argc--;
		}
	}
	return (0);
}
