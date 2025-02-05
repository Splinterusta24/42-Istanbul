/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:01:56 by nakbas            #+#    #+#             */
/*   Updated: 2025/01/20 14:01:56 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <minitalkserver.h>

static int c;

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    int tmp;

    len = 1;
    tmp = n;
    while (tmp /= 10)
        len++;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = n % 10 + '0';
        n /= 10;
    }
    return (str);
}

void handler(int signal, siginfo_t *info, void *context)
{
    static char ch;
    (void)context;

    ch = ch << 1;
    if (signal == SIGUSR1)
        ch = ch | 1;
    c++;
    if (c == 8)
    {
        c = 0;
        write(1, &ch, 1);
        ch = 0;
    }
    kill(info->si_pid, SIGUSR1);
}

int main()
{
    struct sigaction act;
    act.sa_sigaction = handler;
    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    ft_putstr("Server PID: ");
    ft_putstr(ft_itoa(getpid()));
    ft_putstr("\n");
    while(1)
        pause();
    return (0);
}