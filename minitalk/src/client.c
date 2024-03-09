/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:01:07 by gigardin          #+#    #+#             */
/*   Updated: 2024/01/13 18:32:26 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	g_delivered = 0;

void	signal_delivery(int signal)
{
	if (signal == SIGUSR1)
	{
		g_delivered = 1;
	}
}

int	check_input(int argc, char **argv)
{
	int	input_correct;

	input_correct = 0;
	if (argc != 3)
		ft_printf("%s\n", "Please, verify the input"
			" -> ./client <PID> <Message>");
	else if (!ft_isstringdigit(argv[1]))
	{
		ft_printf("%s\n", "Please, verify the PID");
		ft_printf("%s\n", "- Only numeric values are allowed");
	}
	else if (*argv[2] == 0)
		ft_printf("%s\n", "Please, insert a non-empty");
	else
		input_correct = 1;
	return (input_correct);
}

void	send_bit(int server_pid, unsigned char c_msg)
{
	int				i;
	unsigned char	bit;

	i = 0;
	while (i < 8)
	{
		g_delivered = 0;
		bit = (c_msg >> i & 1);
		if (bit == 0)
			kill(server_pid, SIGUSR1);
		else if (bit == 1)
			kill(server_pid, SIGUSR2);
		i++;
		while (!g_delivered)
			;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					i;
	int					server_pid;

	i = 0;
	if (check_input(argc, argv) == 1)
	{
		server_pid = ft_atoi(argv[1]);
		sa.sa_handler = signal_delivery;
		sa.sa_flags = 0;
		sigaction(SIGUSR1, &sa, NULL);
		while (argv[2][i] != '\0')
		{
			send_bit(server_pid, argv[2][i]);
			i++;
		}
		send_bit(server_pid, '\n');
	}
	return (0);
}
