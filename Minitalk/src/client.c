/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:02:06 by nakbas            #+#    #+#             */
/*   Updated: 2025/01/20 14:02:06 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalkclient.h"

int	g_flag = 0;

void    print_message(int signal)
{
	if (signal == SIGUSR1)
	{
		g_flag = 1;
	}
}

int atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

static void send_signal(int pid, char *str)
{
	int i = 0;
	int bit = 7;
	while (str[i] != '\0')
	{
		bit = 7;
		while (bit >= 0)
		{
			if ((str[i] >> bit) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			while (!g_flag)
				;
			g_flag = 0;
			bit--;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	g_flag = 0;
	if (argc ==3)
	{
		int pid = atoi(argv[1]);
		signal(SIGUSR1, print_message);
		send_signal(pid, argv[2]);
	}
	write(1, "Message received\n", 17);
	return (0);
}