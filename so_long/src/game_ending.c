/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_ending.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:04:31 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/08 13:49:53 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	end_game(t_data *game)
{
	if (game->win.mlx_win)
		close_window(game);
	free_map(&game->map);
	free_sprites_background(game); // criar
	free_sprites_collectible_and_player(game); // criar
	free_sprites_ending_and_enemy(game); // criar
	end_mlx_connect(game); // criar
	if (game->config_stage < 4)
		exit (EXIT_SUCCESS);
}

void	handle_error(int error_type, char *error_msg, t_data *game)
{
	if (game->config_stage == 2)
		free_map(&game->map);
	if (game->config_stage == 3)
		end_game(game);
	if (error_type == 1)
	{
		ft_printf("\n%s", error_msg);
		perror("");
		exit (EXIT_FAILURE);
	}
	ft_printf ("\n%s", error_msg);
	exit (EXIT_FAILURE); //função para sair do processo e mostrar motivo de saída,
	//funções da stdlib.h
}
