/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:30 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/17 01:57:47 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	init_window(t_data *game)
{
	int	screen_width;
	int	screen_height;

	game->mlx = NULL;
	mlx_get_monitor_size(0, &screen_width, &screen_height);
	game->windows_width = game->map.columns * TILE_SIZE;
	game->windows_height = game->map.rows * TILE_SIZE;
	if (game->windows_width > screen_width
		|| game->windows_height > screen_height)
		handle_error(0, "Your Map is too big for this screen!\n", game);
	game->mlx = mlx_init(game->windows_width, game->windows_height,
			"So_long", true);
	if (game->mlx == NULL)
		handle_error(0, "mlx_init failed!\n", game);
}

void	call_images(t_data *game)
{
	create_new_player_image(game);
	create_texture_from_png_one(game);
	create_texture_from_png_two(game);
	create_texture_from_png_three(game);
	create_img_from_texture_one(game);
	create_img_from_texture_two(game);
	create_img_from_texture_three(game);
	resize_of_image_one(game);
	resize_of_image_two(game);
}

void	check_images(t_data *game)
{
	if (game->human.f_img == NULL || game->human.l_img == NULL
		|| game->human.r_img == NULL || game->human.b_img == NULL
		|| game->wall.img1 == NULL || game->wall.img2 == NULL
		|| game->wall.img3 == NULL || game->wall.img4 == NULL
		|| game->ground.img1 == NULL || game->ground.img2 == NULL
		|| game->ground.img3 == NULL || game->ground.img4 == NULL
		|| game->happiness.img1 == NULL || game->happiness.img2 == NULL
		|| game->happiness.img3 == NULL || game->happiness.img4 == NULL
		|| game->money_enemy.img1 == NULL || game->money_enemy.img2 == NULL
		|| game->money_enemy.img3 == NULL || game->money_enemy.img4 == NULL
		|| game->win_portal.img1 == NULL || game->win_portal.img2 == NULL
		|| game->win_portal.img3 == NULL || game->win_portal.img4 == NULL
		|| game->portal.img1 == NULL || game->portal.img2 == NULL
		|| game->portal.img3 == NULL || game->portal.img4 == NULL
		|| game->loser_greedy.img1 == NULL || game->loser_greedy.img2 == NULL
		|| game->loser_greedy.img3 == NULL || game->loser_greedy.img4 == NULL
		|| game->game_over.img == NULL || game->you_win.img == NULL)
		handle_error(0, "Image loading failed!\n", game);
}

void	initiate_game(t_data *game)
{
	init_window(game);
	game->config_stage = 3;
	call_images(game);
	check_images(game);
	game->config_stage = 4;
	mlx_loop_hook(game->mlx, &hook_close_window, &game);
	mlx_key_hook(game->mlx, &hook_move_player, &game);
	mlx_loop(game->mlx);
}
