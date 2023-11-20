/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_ending.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:04:31 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 13:11:12 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	free_and_end_game(t_data *game)
{
	free_textures(game);
	free_images(game);
	mlx_close_window(game->mlx);
	mlx_terminate(game->mlx);
	free_map(game->map);
	if (game->config_stage < 4)
		return (1);
	exit (EXIT_SUCCESS);
}

void	handle_error(int error_type, char *error_msg, t_data *game)
{
	if (game->config_stage == 2)
		free_map(game->map);
	if (game->config_stage == 3)
		free_and_end_game(game);
	if (error_type == 1)
	{
		ft_printf("%s", error_msg);
		exit (EXIT_FAILURE);
	}
	ft_printf ("Error!!\n%s", error_msg);
	exit (EXIT_FAILURE);
}

 //função para sair do processo e mostrar motivo de saída,
	//funções da stdlib.h