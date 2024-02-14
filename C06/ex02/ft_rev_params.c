/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:02:54 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/14 10:26:36 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	argc -= 1;
	if (argc > 1)
	{
		while (0 < argc)
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
