/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:30 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 17:46:25 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	init_window(t_data *game)
{
	game->windows_width = game->map->columns * TILE_SIZE;
	game->windows_height = game->map->rows * TILE_SIZE;
	if (game->windows_width > WIDHT_SCREEN
		|| game->windows_height > HEIGHT_SCREEN)
		handle_error(0, "Your Map is too big for this screen!\n", game);
	game->mlx = mlx_init(game->windows_width, game->windows_height, \
	"Are you ready for your journey?", false);
	if (game->mlx == NULL)
		handle_error(0, "mlx_init failed!\n", game);
}

void	check_images(t_data *game)
{
	if (game->content->human_1 == NULL || game->content->wall_1 == NULL
		|| game->content->ground_1 == NULL || game->content->happiness_1 == NULL
		|| game->content->portal_1 == NULL)
		handle_error(0, "Image loading failed!\n", game);
}

void	initiate_game(t_data *game)
{
	init_window(game);
	game->config_stage = 3;
	create_texture_from_png(game);
	create_img_from_texture(game);
	resize_of_image(game);
	check_images(game);
	render_hook_map(game);
	game->config_stage = 4;
	mlx_key_hook(game->mlx, &hook_move_player, game);
	mlx_loop_hook(game->mlx, &hook_close_window, game);
	mlx_loop(game->mlx);
	free_and_end_game(game);
}
