/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:39:58 by gigardin          #+#    #+#             */
/*   Updated: 2024/01/13 15:40:09 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	g_bit = 0;

static void	print_message(int signal, siginfo_t *siginfo, void *context)
{
	static unsigned char	character;

	(void)context;
	if (signal == SIGUSR1)
		character += 0 << g_bit;
	if (signal == SIGUSR2)
		character += 1 << g_bit;
	g_bit++;
	if (g_bit == 8)
	{
		ft_putchar_fd(character, 1);
		g_bit = 0;
		character = 0;
	}
	kill(siginfo->si_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					server_pid;

	(void)argv;
	server_pid = getpid();
	if (argc != 1)
	{
		ft_printf("%s\n", "Please, verify the input -> ./server");
		return (0);
	}
	ft_printf("%s%d\n", "Server PID: ", server_pid);
	sa.sa_sigaction = print_message;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
