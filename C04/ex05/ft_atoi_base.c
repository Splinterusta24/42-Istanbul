/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:26:59 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/13 16:09:48 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	base_num(char str, char *base, int len2)
{
	int	nb;
	int	i;
	int	len;

	nb = 0;
	len = base_len(base);
	i = 0;
	while (str != base[nb])
		nb++;
	len2 -= 1;
	while (0 < len2)
	{
		nb *= len;
		len2--;
	}
	return (nb);
}

int	skip_plus_minus(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	is_correct(char *base)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	i = 0;
	len = base_len(base);
	if (base[i] == '\0' || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = 1;
		while ((i + j) <= len)
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	error;
	int	minus;
	int	len2;
	int	result;

	i = 0;
	result = 0;
	error = is_correct(base);
	minus = skip_plus_minus(str, &i);
	len2 = base_len(str + i);
	if (error >= 2)
	{
		while (str[i])
		{
			result += base_num(str[i], base, len2--);
			i++;
		}
		return (minus * result);
	}
	return (0);
}
