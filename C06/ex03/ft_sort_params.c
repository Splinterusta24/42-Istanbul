/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:02:54 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/14 13:02:32 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **x, char **y)
{
	char	*c;

	c = *x;
	*x = *y;
	*y = c;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	i = 1;
	j = 1;
	argc -= 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (j < argc)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					ft_swap(&argv[j], &argv[j + 1]);
				}
				j++;
			}
			j = 1;
			i++;
		}
		while (j <= argc)
			ft_putstr(argv[j++]);
	}
	return (0);
}
