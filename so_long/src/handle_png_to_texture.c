/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_png_to_texture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/14 16:53:51 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	create_new_player_image(t_data *game, char *path)
{
	mlx_delete_texture(game->human.f_texture);
	mlx_delete_image(game->mlx42_connection, game->human.f_texture);
}

int32_t	create_texture_from_png_one(t_data *game)
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

int32_t	create_texture_from_png_two(t_data *game)
{
	game->happiness.texture1 = mlx_load_png(COLLECT_1);
	game->happiness.texture2 = mlx_load_png(COLLECT_2);
	game->happiness.texture3 = mlx_load_png(COLLECT_3);
	game->happiness.texture4 = mlx_load_png(COLLECT_4);
	game->money_enemy.texture1 = mlx_load_png(ENEMY_1);
	game->money_enemy.texture2 = mlx_load_png(ENEMY_2);
	game->money_enemy.texture3 = mlx_load_png(ENEMY_3);
	game->money_enemy.texture4 = mlx_load_png(ENEMY_4);
	game->portal.texture1 = mlx_load_png(PORTAL1);
	game->portal.texture2 = mlx_load_png(PORTAL2);
	game->portal.texture3 = mlx_load_png(PORTAL3);
	game->portal.texture4 = mlx_load_png(PORTAL4);
	if (!game->happiness.texture1 || !game->happiness.texture2
		|| !game->happiness.texture3 || !game->happiness.texture4
		|| !game->money_enemy.texture1 || !game->money_enemy.texture2
		|| !game->money_enemy.texture3 || !game->money_enemy.texture4
		|| !game->portal.texture1 || !game->portal.texture2
		|| !game->portal.texture3 || !game->portal.texture4)
		return (FALSE);
	return (TRUE);
}

int32_t	create_texture_from_png_three(t_data *game)
{
	game->game_over.texture = mlx_load_png(GAME_OVER);
	game->you_win.texture = mlx_load_png(GAME_WIN);
	game->loser_greedy.texture1 = mlx_load_png(LOSER_GREEDY1);
	game->loser_greedy.texture2 = mlx_load_png(LOSER_GREEDY2);
	game->loser_greedy.texture3 = mlx_load_png(LOSER_GREEDY3);
	game->loser_greedy.texture4 = mlx_load_png(LOSER_GREEDY4);
	game->win_portal.texture1 = mlx_load_png(WIN_PORTAL1);
	game->win_portal.texture2 = mlx_load_png(WIN_PORTAL2);
	game->win_portal.texture3 = mlx_load_png(WIN_PORTAL3);
	game->win_portal.texture4 = mlx_load_png(WIN_PORTAL4);
	if (!game->game_over.texture || !game->you_win.texture
		|| !game->loser_greedy.texture1 || !game->loser_greedy.texture2
		|| !game->loser_greedy.texture3 || !game->loser_greedy.texture4
		|| !game->win_portal.texture1 || !game->win_portal.texture2
		|| !game->win_portal.texture3 || !game->win_portal.texture4)
		return (FALSE);
	return (TRUE);
}
