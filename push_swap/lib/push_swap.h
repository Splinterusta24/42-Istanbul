/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:00:14 by nakbas            #+#    #+#             */
/*   Updated: 2025/02/01 06:23:06 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "stdio.h"
# include "unistd.h"

typedef struct t_list
{
	int data;
	struct t_list* next;
} t_stack;

void	string_argument();
void	null_argument();
void	enough_argument();



#endif