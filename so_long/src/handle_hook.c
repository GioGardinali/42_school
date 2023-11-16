/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:17:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/16 14:40:13 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	hook_close_window(void *key)
{
	t_data	*game;

	game = (t_data *)key;
	if (mlx_is_key_down(game->mlx, MLX_KEY_ESCAPE))
	{
		mlx_close_window(game->mlx);
	}
}

void	hook_move_player(mlx_key_data_t keydata, t_data *game, t_player *human)
{
	if (((keydata.key == MLX_KEY_W) || (keydata.key == MLX_KEY_UP))
		&& keydata.action == MLX_PRESS
		&& game->map.grid_matrix[human->y - 1][human->x] != '1')
		move_up(game, &game->human);
	if (((keydata.key == MLX_KEY_S) || (keydata.key == MLX_KEY_DOWN))
		&& keydata.action == MLX_PRESS
		&& game->map.grid_matrix[human->y + 1][human->x] != '1')
		move_down(game, &game->human);
	if (((keydata.key == MLX_KEY_A) || (keydata.key == MLX_KEY_LEFT))
		&& keydata.action == MLX_PRESS
		&& game->map.grid_matrix[human->y][human->x - 1] != '1')
		move_left(game, &game->human);
	if (((keydata.key == MLX_KEY_D) || (keydata.key == MLX_KEY_RIGHT))
		&& keydata.action == MLX_PRESS
		&& game->map.grid_matrix[human->y][human->x + 1] != '1')
		move_right(game, &game->human);
}

void	render_map_game(t_data *game, int x, int y)
{
	if (game->map.grid_matrix[y][x] == '0')
		render_ground(game, x, y);
	if (game->map.grid_matrix[y][x] == '1')
		render_wall(game, x, y);
	if (game->map.grid_matrix[y][x] == 'C')
		render_collectable(game, x, y);
	if (game->map.grid_matrix[y][x] == 'E')
		render_exit(game, x, y);
	if (game->map.grid_matrix[y][x] == 'P')
		render_human(game, x, y);
	if (game->map.grid_matrix[y][x] == 'M')
		render_money_enemy(game, x, y);
	display_count__on_screen(game);
}

int	render_hook_map(t_data *game)
{
	int	x;
	int	y;

	if (game->mlx->window == NULL)
		return (FALSE);
	y = 0;
	while (y < game->map.rows)
	{
		x = 0;
		while (x < game->map.columns)
		{
			render_map_game(game, x, y);
			x++;
		}
		y++;
	}
	return (TRUE);
}
