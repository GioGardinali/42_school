/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_png_to_texture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 14:41:30 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int32_t	create_texture_from_png(t_data *game)
{
	game->content->wall = mlx_load_png("./images/wall_1.png");
	game->content->human = mlx_load_png("./images/player_up.png");
	game->content->ground = mlx_load_png("./images/ground_1.png");
	game->content->happiness = mlx_load_png("./images/collect_1.png");
	game->content->portal = mlx_load_png("./images/exit_p_1.png");
	if (!game->content->human || !game->content->wall || !game->content->ground
		|| !game->content->happiness || !game->content->portal)
		return (FALSE);
	return (TRUE);
}

// int32_t	create_texture_from_png_two(t_data *game)
// {
// 	game->content->>money_enemy = mlx_load_png(ENEMY_1);

// 	if (!game->content->>money_enemy)
// 		return (FALSE);
// 	return (TRUE);
// }

// int32_t	create_texture_from_png_three(t_data *game)
// {
// 	game->content->>game_over = mlx_load_png(GAME_OVER);
// 	game->content->>you_win = mlx_load_png(GAME_WIN);
// 	game->content->>loser_greedy = mlx_load_png(LOSER_GREEDY1);
// 	game->content->>win_portal = mlx_load_png(WIN_PORTAL1);
// 	if (!game->content->>game_over || !game->content->>you_win
// 		|| !game->content->>loser_greedy || !game->content->>win_portal)
// 		return (FALSE);
// 	return (TRUE);
// }
