/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_texture_to_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/17 17:54:10 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	create_img_from_texture_one(t_data *game)
{
	game->human_1 = mlx_texture_to_image(game->mlx, game->human);
	// game->human.l_img = mlx_texture_to_image(game->mlx, game->human.l_texture);
	// game->human.r_img = mlx_texture_to_image(game->mlx, game->human.r_texture);
	// game->human.b_img = mlx_texture_to_image(game->mlx, game->human.b_texture);
	game->wall_1 = mlx_texture_to_image(game->mlx, game->wall);
	// game->wall.img2 = mlx_texture_to_image(game->mlx, game->wall.texture2);
	// game->wall.img3 = mlx_texture_to_image(game->mlx, game->wall.texture3);
	// game->wall.img4 = mlx_texture_to_image(game->mlx, game->wall.texture4);
	game->ground_1 = mlx_texture_to_image(game->mlx, game->ground);
	// game->ground.img2 = mlx_texture_to_image(game->mlx, game->ground.texture2);
	// game->ground.img3 = mlx_texture_to_image(game->mlx, game->ground.texture3);
	// game->ground.img4 = mlx_texture_to_image(game->mlx, game->ground.texture4);
	game->happiness_1 = mlx_texture_to_image(game->mlx,
			game->happiness);
	// game->happiness.img2 = mlx_texture_to_image(game->mlx,
	// 		game->happiness.texture2);
	// game->happiness.img3 = mlx_texture_to_image(game->mlx,
	// 		game->happiness.texture3);
	// game->happiness.img4 = mlx_texture_to_image(game->mlx,
	// 		game->happiness.texture4);
}

void	create_img_from_texture_two(t_data *game)
{
	game->money_enemy_1 = mlx_texture_to_image(game->mlx,
			game->money_enemy);
	// game->money_enemy.img2 = mlx_texture_to_image(game->mlx,
	// 		game->money_enemy.texture2);
	// game->money_enemy.img3 = mlx_texture_to_image(game->mlx,
	// 		game->money_enemy.texture3);
	// game->money_enemy.img4 = mlx_texture_to_image(game->mlx,
	// 		game->money_enemy.texture4);
	game->win_portal_1 = mlx_texture_to_image(game->mlx,
			game->win_portal);
	// game->win_portal.img2 = mlx_texture_to_image(game->mlx,
	// 		game->win_portal.texture2);
	// game->win_portal.img3 = mlx_texture_to_image(game->mlx,
	// 		game->win_portal.texture3);
	// game->win_portal.img4 = mlx_texture_to_image(game->mlx,
	// 		game->win_portal.texture4);
	game->portal_1 = mlx_texture_to_image(game->mlx, game->portal);
	// game->portal.img2 = mlx_texture_to_image(game->mlx, game->portal.texture2);
	// game->portal.img3 = mlx_texture_to_image(game->mlx, game->portal.texture3);
	// game->portal.img4 = mlx_texture_to_image(game->mlx, game->portal.texture4);
}

void	create_img_from_texture_three(t_data *game)
{
	game->game_over_1 = mlx_texture_to_image(game->mlx,
			game->game_over);
	game->you_win_1 = mlx_texture_to_image(game->mlx, game->you_win);
	game->loser_greedy_1 = mlx_texture_to_image(game->mlx,
			game->loser_greedy);
	// game->loser_greedy.img2 = mlx_texture_to_image(game->mlx,
	// 		game->loser_greedy.texture2);
	// game->loser_greedy.img3 = mlx_texture_to_image(game->mlx,
	// 		game->loser_greedy.texture3);
	// game->loser_greedy.img4 = mlx_texture_to_image(game->mlx,
	// 		game->loser_greedy.texture4);
}

void	resize_of_image_one(t_data *game)
{
	mlx_resize_image(game->human_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->human.l_img, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->human.r_img, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->human.b_img, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->wall_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->wall.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->wall.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->wall.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->ground_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->ground.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->ground.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->ground.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->happiness_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->happiness.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->happiness.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->happiness.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->money_enemy_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->money_enemy.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->money_enemy.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->money_enemy.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
}

void	resize_of_image_two(t_data *game)
{
	mlx_resize_image(game->win_portal_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->win_portal.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->win_portal.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->win_portal.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->portal_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->portal.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->portal.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->portal.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->game_over_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->you_win_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	mlx_resize_image(game->loser_greedy_1, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->loser_greedy.img2, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->loser_greedy.img3, IMAGE_WIDTH, IMAGE_HEIGHT);
	// mlx_resize_image(game->loser_greedy.img4, IMAGE_WIDTH, IMAGE_HEIGHT);
}
