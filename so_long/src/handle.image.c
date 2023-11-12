/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/12 16:09:27 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	create_new_player_image(t_data *game, char *path)
{
	mlx_delete_texture(game->human.texture);
	mlx_delete_image(game->mlx42_connection, game->human. );
}

int32_t create_texture_from_png_pt_one(t_data *game)
{
	game->human.f_texture = mlx_load_png(PLAYER_UP);
	game->human.l_texture = mlx_load_png(PLAYER_L);
	game->human.r_texture = mlx_load_png(PLAYER_R);
	game->human.b_texture = mlx_load_png(PLAYER_D);
	game->wall.texture1 = mlx_load_png(WALL_1);
	game->wall.texture2 = mlx_load_png(WALL_2);
	game->wall.texture3 = mlx_load_png(WALL_3);
	game->wall.texture4 = mlx_load_png(WALL_4);
	game->ground.texture1 = mlx_load_png(GROUND_1);
	game->ground.texture2 = mlx_load_png(GROUND_2);
	game->ground.texture3 = mlx_load_png(GROUND_3);
	game->ground.texture4 = mlx_load_png(GROUND_4);
	if (!game->human.f_texture || !game->human.l_texture
		|| !game->human.r_texture || !game->human.b_texture
		|| !game->wall.texture1 || !game->wall.texture2
		|| !game->wall.texture3 || !game->wall.texture4
		|| !game->ground.texture1 || !game->ground.texture2
		|| !game->ground.texture3 || !game->ground.texture4)
		return (FALSE);
	return (TRUE);
}

int32_t create_texture_from_png_pt_two(t_data *game)
{
	game->happiness.texture1 = mlx_load_png(COLLECT_1);
	game->happiness.texture2 = mlx_load_png(COLLECT_2);
	game->happiness.texture3 = mlx_load_png(COLLECT_3);
	game->happiness.texture4 = mlx_load_png(COLLECT_4);
	game->money_enemy.texture1 = mlx_load_png(ENEMY_1);
	game->money_enemy.texture2 = mlx_load_png(ENEMY_2);
	game->money_enemy.texture3 = mlx_load_png(ENEMY_3);
	game->money_enemy.texture4 = mlx_load_png(ENEMY_4);
	game->portal.texture1 = mlx_load_png(EXIT_LOSER1);
	game->portal.texture2 = mlx_load_png(EXIT_LOSER2);
	game->portal.texture3 = mlx_load_png(EXIT_LOSER3);
	game->portal.texture4 = mlx_load_png(EXIT_LOSER4);
	if (!game->happiness.texture1 || !game->happiness.texture2
		|| !game->happiness.texture3 || !game->happiness.texture4
		|| !game->money_enemy.texture1 || !game->money_enemy.texture2
		|| !game->money_enemy.texture3 || !game->money_enemy.texture4
		|| !game->portal.texture1 || !game->portal.texture2
		|| !game->portal.texture3 || !game->portal.texture4)
		return (FALSE);
	return (TRUE);
}
