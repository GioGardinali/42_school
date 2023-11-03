/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:30 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/03 20:09:33 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	get_init_window(t_data *game)
{
	int	screen_width;
	int	screen_height;

	game->win.mlx_win = NULL;
	game->win.width = game->map.columns * TILE_SIZE;
	game->win.height = game->map.rows * TILE_SIZE;
	//fazer tratativa de erro para o tamanho que a janela deveria abrir;
	game->mlx42_connection = mlx_init(game->win.width, game->win.height,
			"So_long", true);
	if (!game->mlx42_connection)
		//Construir erro
		ft_printf("Deu erro!");
	return (TRUE);
	//fazer tratativa de condicional para tamanho e tile correto;
}

// void get_size_window(t_data *game)
// {

// 	game->win.width = game->map.columns * TILE_SIZE;
// 	game->win.height = game->map.rows * TILE_SIZE;
// }

void	initiate_game(t_data *game)
{

}