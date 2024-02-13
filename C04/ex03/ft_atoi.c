/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:41:24 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/12 18:28:07 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	signs(char *str, int *sign, int *a)
{
	while (str[*a] == '+' || str[*a] == '-')
	{
		if (str[*a] == '-')
			*sign *= -1;
		*a = *a + 1;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	signs(str, &sign, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
