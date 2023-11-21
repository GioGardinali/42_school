/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_texture_to_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 12:45:10 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	create_img_from_texture(t_data *game)
{
	game->content->human_1 = mlx_texture_to_image(game->mlx,
			game->content->human);
	game->content->wall_1 = mlx_texture_to_image(game->mlx,
			game->content->wall);
	game->content->ground_1 = mlx_texture_to_image(game->mlx,
			game->content->ground);
	game->content->happiness_1 = mlx_texture_to_image(game->mlx,
			game->content->happiness);
	game->content->portal_1 = mlx_texture_to_image(game->mlx,
			game->content->portal);
}

void	resize_of_image(t_data *game)
{
	mlx_resize_image(game->content->human_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->content->wall_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->content->ground_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->content->happiness_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->content->portal_1, IMAGE_WIDTH, IMAGE_HEIGHT);
}

// void	create_img_from_texture_two(t_data *game)
// {
// 	game->content->money_enemy_1 = mlx_texture_to_image(game->mlx,
// 			game->content->money_enemy);
// 	game->content->win_portal_1 = mlx_texture_to_image(game->mlx,
// 			game->content->win_portal);
// }

// void	create_img_from_texture_three(t_data *game)
// {
// 	game->content->game_over_1 = mlx_texture_to_image(game->mlx,
// 			game->content->game_over);
// 	game->content->you_win_1 = mlx_texture_to_image(game->mlx,
// 			game->content->you_win);
// 	game->content->loser_greedy_1 = mlx_texture_to_image(game->mlx,
// 			game->content->loser_greedy);
// }

// void	resize_of_image_two(t_data *game)
// {
// 	mlx_resize_image(game->content->win_portal_1, IMAGE_WIDTH, IMAGE_HEIGHT);
// 	mlx_resize_image(game->content->money_enemy_1, IMAGE_WIDTH, IMAGE_HEIGHT);
// 	mlx_resize_image(game->content->game_over_1, IMAGE_WIDTH, IMAGE_HEIGHT);
// 	mlx_resize_image(game->content->you_win_1, IMAGE_WIDTH, IMAGE_HEIGHT);
// 	mlx_resize_image(game->content->loser_greedy_1, IMAGE_WIDTH, IMAGE_HEIGHT);
// }
