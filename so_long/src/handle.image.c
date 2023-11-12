/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/12 12:34:47 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	create_new_player_image(t_data *game, char *path)
{
	mlx_delete_texture(game->human.texture);
	mlx_delete_image(game->mlx42_connection, game->human. );
}

int32_t create_texture_from_png(t_data *game)
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
}
