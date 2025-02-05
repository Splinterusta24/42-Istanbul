/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:17:48 by nakbas            #+#    #+#             */
/*   Updated: 2025/02/01 06:22:27 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	null_argument()
{
	write(2, "No argument\n", 12);
	exit(1);
}

void	string_argument()
{
	write(2, "String argument!\n", 17);
	exit(1);
}

void	enough_argument()
{
	write(2, "Not enough arguments\n", 21);
	exit(1);
}

