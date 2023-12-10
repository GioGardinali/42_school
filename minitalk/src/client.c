/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:01:07 by gigardin          #+#    #+#             */
/*   Updated: 2023/12/10 19:20:03 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

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

void	send_message(int server_pid, char c_msg)
{
	int	bit;

	bit = 8;
	while (bit > 0)
	{
		if (c_msg >> bit & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		server_pid;
	char	*message;

	i = 0;
	if (check_input(argc, argv) == 1)
	{
		server_pid = ft_atoi(argv[1]);
		message = ft_strduo(argv[2]);
		while (message[i] != '\0')
		{
			send_message(server_pid, message[i]);
			i++;
		}
		free(message);
		send_message(server_pid, '\n');
	}
	return (0);
}
