/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:38:30 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/13 22:18:22 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	if (index > 0)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
		return (result);
	}
	else
		return (-1);
}
