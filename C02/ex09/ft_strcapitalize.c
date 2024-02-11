/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:57:51 by nakbas            #+#    #+#             */
/*   Updated: 2024/02/07 15:23:08 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str, int *j)
{
	if (str[*j] <= 122 && str[*j] >= 97)
	{
		str[*j] -= 32;
		*j = *j + 1;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	str = ft_strupcase(str, &i);
	while (str[i])
	{
		if (str[i] == ' ' || !((str[i] >= 48 && str[i] <= 57)
				|| (str[i] <= 122 && str[i] >= 97)
				|| (str[i] >= 65 && str[i] <= 90)))
		{
			i++;
			str = ft_strupcase(str, &i);
		}
		else
			i++;
	}
	return (str);
}
