/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:15 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	free_map(t_map *map)
{
	int	y;

	y = 0;
	while (y < map->rows)
	{
		free(map->grid_matrix[y]);
		y++;
	}
	free(map->grid_matrix);
}

static	void	free_images_one(t_data *game)
{
	mlx_delete_image(game->mlx, game->human.f_img);
	mlx_delete_image(game->mlx, game->human.l_img);
	mlx_delete_image(game->mlx, game->human.r_img);
	mlx_delete_image(game->mlx, game->human.b_img);
	mlx_delete_image(game->mlx, game->wall.img1);
	mlx_delete_image(game->mlx, game->wall.img2);
	mlx_delete_image(game->mlx, game->wall.img3);
	mlx_delete_image(game->mlx, game->wall.img4);
	mlx_delete_image(game->mlx, game->ground.img1);
	mlx_delete_image(game->mlx, game->ground.img2);
	mlx_delete_image(game->mlx, game->ground.img3);
	mlx_delete_image(game->mlx, game->ground.img4);
	mlx_delete_image(game->mlx, game->happiness.img1);
	mlx_delete_image(game->mlx, game->happiness.img2);
	mlx_delete_image(game->mlx, game->happiness.img3);
	mlx_delete_image(game->mlx, game->happiness.img4);
	mlx_delete_image(game->mlx, game->money_enemy.img1);
	mlx_delete_image(game->mlx, game->money_enemy.img2);
	mlx_delete_image(game->mlx, game->money_enemy.img3);
	mlx_delete_image(game->mlx, game->money_enemy.img4);
}

static	void	free_images_two(t_data *game)
{
	mlx_delete_image(game->mlx, game->win_portal.img1);
	mlx_delete_image(game->mlx, game->win_portal.img2);
	mlx_delete_image(game->mlx, game->win_portal.img3);
	mlx_delete_image(game->mlx, game->win_portal.img4);
	mlx_delete_image(game->mlx, game->portal.img1);
	mlx_delete_image(game->mlx, game->portal.img2);
	mlx_delete_image(game->mlx, game->portal.img3);
	mlx_delete_image(game->mlx, game->portal.img4);
	mlx_delete_image(game->mlx, game->game_over.img);
	mlx_delete_image(game->mlx, game->you_win.img);
	mlx_delete_image(game->mlx, game->loser_greedy.img1);
	mlx_delete_image(game->mlx, game->loser_greedy.img2);
	mlx_delete_image(game->mlx, game->loser_greedy.img3);
	mlx_delete_image(game->mlx, game->loser_greedy.img4);
}

static void	free_textures_one(t_data *game)
{
	mlx_delete_texture(game->human.f_texture);
	mlx_delete_texture(game->human.l_texture);
	mlx_delete_texture(game->human.r_texture);
	mlx_delete_texture(game->human.b_texture);
	mlx_delete_texture(game->wall.texture1);
	mlx_delete_texture(game->wall.texture2);
	mlx_delete_texture(game->wall.texture3);
	mlx_delete_texture(game->wall.texture4);
	mlx_delete_texture(game->ground.texture1);
	mlx_delete_texture(game->ground.texture2);
	mlx_delete_texture(game->ground.texture3);
	mlx_delete_texture(game->ground.texture4);
	mlx_delete_texture(game->happiness.texture1);
	mlx_delete_texture(game->happiness.texture2);
	mlx_delete_texture(game->happiness.texture3);
	mlx_delete_texture(game->happiness.texture4);
}

static void	free_textures_two(t_data *game)
{
	mlx_delete_texture(game->money_enemy.texture1);
	mlx_delete_texture(game->money_enemy.texture2);
	mlx_delete_texture(game->money_enemy.texture3);
	mlx_delete_texture(game->money_enemy.texture4);
	mlx_delete_texture(game->portal.texture1);
	mlx_delete_texture(game->portal.texture2);
	mlx_delete_texture(game->portal.texture3);
	mlx_delete_texture(game->portal.texture4);
	mlx_delete_texture(game->game_over.texture);
	mlx_delete_texture(game->you_win.texture);
	mlx_delete_texture(game->loser_greedy.texture1);
	mlx_delete_texture(game->loser_greedy.texture2);
	mlx_delete_texture(game->loser_greedy.texture3);
	mlx_delete_texture(game->loser_greedy.texture4);
	mlx_delete_texture(game->win_portal.texture1);
	mlx_delete_texture(game->win_portal.texture2);
	mlx_delete_texture(game->win_portal.texture3);
	mlx_delete_texture(game->win_portal.texture4);
}
