/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:17:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 23:14:42 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	hook_close_window(void *key)
{
	t_data	*game;

	game = (t_data *)key;
	if (mlx_is_key_down(game->mlx, MLX_KEY_ESCAPE))
		free_and_end_game(game);
}

void	hook_move_player(mlx_key_data_t keydata, void *parameter)
{
	t_data		*game;

	game = (t_data *)parameter;
	game->human_init_x = game->content->human_1->instances->x / TILE_SIZE;
	game->human_init_y = game->content->human_1->instances->y / TILE_SIZE;
	if (((keydata.key == MLX_KEY_W) || (keydata.key == MLX_KEY_UP))
		&& keydata.action == MLX_PRESS
		&& game->map->grid_matrix[game->human_init_y - 1][game->human_init_x]
		!= '1')
		move_up(game, game->human_init_x, game->human_init_y);
	if (((keydata.key == MLX_KEY_S) || (keydata.key == MLX_KEY_DOWN))
		&& keydata.action == MLX_PRESS
		&& game->map->grid_matrix[game->human_init_y + 1][game->human_init_x]
		!= '1')
		move_down(game, game->human_init_x, game->human_init_y);
	if (((keydata.key == MLX_KEY_A) || (keydata.key == MLX_KEY_LEFT))
		&& keydata.action == MLX_PRESS
		&& game->map->grid_matrix[game->human_init_y][game->human_init_x - 1]
		!= '1')
		move_left(game, game->human_init_x, game->human_init_y);
	if (((keydata.key == MLX_KEY_D) || (keydata.key == MLX_KEY_RIGHT))
		&& keydata.action == MLX_PRESS
		&& game->map->grid_matrix[game->human_init_y][game->human_init_x + 1]
		!= '1')
		move_right(game, game->human_init_x, game->human_init_y);
}

void	render_map_game(t_data *game, int x, int y)
{
	if (game->map->grid_matrix[y][x] == '0')
		render_ground(game, x, y);
	if (game->map->grid_matrix[y][x] == '1')
		render_wall(game, x, y);
	if (game->map->grid_matrix[y][x] == 'C')
		render_collectable(game, x, y);
	if (game->map->grid_matrix[y][x] == 'E')
		render_exit(game, x, y);
	if (game->map->grid_matrix[y][x] == 'P')
		render_human(game, x, y);
}

void	render_hook_map(t_data *game)
{
	int	x;
	int	y;

	if (game->mlx == NULL)
		return ;
	y = 0;
	while (y < game->map->rows)
	{
		x = 0;
		while (x < game->map->columns)
		{
			render_map_game(game, x, y);
			x++;
		}
		y++;
	}
}

void	render_human_two(t_data *game, int x, int y)
{
	mlx_delete_image(game->mlx, game->content->human_1);
	mlx_delete_texture(game->content->human);
	game->content->human = mlx_load_png("./images/player_up.png");
	game->content->human_1 = mlx_texture_to_image(game->mlx,
			game->content->human);
	mlx_resize_image(game->content->human_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_image_to_window(game->mlx, game->content->ground_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
	mlx_image_to_window(game->mlx, game->content->human_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}
