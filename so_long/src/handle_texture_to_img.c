/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_texture_to_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:33:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/14 20:44:10 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	create_img_from_texture_one(t_data *game)
{
	game->human.f_img = mlx_texture_to_image(game->mlx, game->human.f_texture);
	game->human.l_img = mlx_texture_to_image(game->mlx, game->human.l_texture);
	game->human.r_img = mlx_texture_to_image(game->mlx, game->human.r_texture);
	game->human.b_img = mlx_texture_to_image(game->mlx, game->human.b_texture);
	game->wall.img1 = mlx_texture_to_image(game->mlx, game->wall.texture1);
	game->wall.img2 = mlx_texture_to_image(game->mlx, game->wall.texture2);
	game->wall.img3 = mlx_texture_to_image(game->mlx, game->wall.texture3);
	game->wall.img4 = mlx_texture_to_image(game->mlx, game->wall.texture4);
	game->ground.img1 = mlx_texture_to_image(game->mlx, game->ground.texture1);
	game->ground.img2 = mlx_texture_to_image(game->mlx, game->ground.texture2);
	game->ground.img3 = mlx_texture_to_image(game->mlx, game->ground.texture3);
	game->ground.img4 = mlx_texture_to_image(game->mlx, game->ground.texture4);
	game->happiness.img1 = mlx_texture_to_image(game->mlx,
			game->happiness.texture1);
	game->happiness.img2 = mlx_texture_to_image(game->mlx,
			game->happiness.texture2);
	game->happiness.img3 = mlx_texture_to_image(game->mlx,
			game->happiness.texture3);
	game->happiness.img4 = mlx_texture_to_image(game->mlx,
			game->happiness.texture4);
}

void	create_img_from_texture_two(t_data *game)
{
	game->money_enemy.img1 = mlx_texture_to_image(game->mlx,
			game->money_enemy.texture1);
	game->money_enemy.img2 = mlx_texture_to_image(game->mlx,
			game->money_enemy.texture2);
	game->money_enemy.img3 = mlx_texture_to_image(game->mlx,
			game->money_enemy.texture3);
	game->money_enemy.img4 = mlx_texture_to_image(game->mlx,
			game->money_enemy.texture4);
	game->win_portal.img1 = mlx_texture_to_image(game->mlx,
			game->win_portal.texture1);
	game->win_portal.img2 = mlx_texture_to_image(game->mlx,
			game->win_portal.texture2);
	game->win_portal.img3 = mlx_texture_to_image(game->mlx,
			game->win_portal.texture3);
	game->win_portal.img4 = mlx_texture_to_image(game->mlx,
			game->win_portal.texture4);
	game->portal.img1 = mlx_texture_to_image(game->mlx, game->portal.texture1);
	game->portal.img2 = mlx_texture_to_image(game->mlx, game->portal.texture2);
	game->portal.img3 = mlx_texture_to_image(game->mlx, game->portal.texture3);
	game->portal.img4 = mlx_texture_to_image(game->mlx, game->portal.texture4);
}

void	create_img_from_texture_three(t_data *game)
{
	game->game_over.img = mlx_texture_to_image(game->mlx,
			game->game_over.texture);
	game->you_win.img = mlx_texture_to_image(game->mlx, game->you_win.texture);
	game->loser_greedy.img1 = mlx_texture_to_image(game->mlx,
			game->loser_greedy.texture1);
	game->loser_greedy.img2 = mlx_texture_to_image(game->mlx,
			game->loser_greedy.texture2);
	game->loser_greedy.img3 = mlx_texture_to_image(game->mlx,
			game->loser_greedy.texture3);
	game->loser_greedy.img4 = mlx_texture_to_image(game->mlx,
			game->loser_greedy.texture4);
}

void	resize_of_image_one(t_data *game)
{
	int	width;
	int	height;

	width = IMAGE_WIDTH;
	height = IMAGE_HEIGHT;
	mlx_resize_image(game->human.f_img, width, height);
	mlx_resize_image(game->human.l_img, width, height);
	mlx_resize_image(game->human.r_img, width, height);
	mlx_resize_image(game->human.b_img, width, height);
	mlx_resize_image(game->wall.img1, width, height);
	mlx_resize_image(game->wall.img2, width, height);
	mlx_resize_image(game->wall.img3, width, height);
	mlx_resize_image(game->wall.img4, width, height);
	mlx_resize_image(game->ground.img1, width, height);
	mlx_resize_image(game->ground.img2, width, height);
	mlx_resize_image(game->ground.img3, width, height);
	mlx_resize_image(game->ground.img4, width, height);
	mlx_resize_image(game->happiness.img1, width, height);
	mlx_resize_image(game->happiness.img2, width, height);
	mlx_resize_image(game->happiness.img3, width, height);
	mlx_resize_image(game->happiness.img4, width, height);
	mlx_resize_image(game->money_enemy.img1, width, height);
	mlx_resize_image(game->money_enemy.img2, width, height);
	mlx_resize_image(game->money_enemy.img3, width, height);
	mlx_resize_image(game->money_enemy.img4, width, height);
}

void	resize_of_image_two(t_data *game)
{
	int	width;
	int	height;

	width = IMAGE_WIDTH;
	height = IMAGE_HEIGHT;
	mlx_resize_image(game->win_portal.img1, width, height);
	mlx_resize_image(game->win_portal.img2, width, height);
	mlx_resize_image(game->win_portal.img3, width, height);
	mlx_resize_image(game->win_portal.img4, width, height);
	mlx_resize_image(game->portal.img1, width, height);
	mlx_resize_image(game->portal.img2, width, height);
	mlx_resize_image(game->portal.img3, width, height);
	mlx_resize_image(game->portal.img4, width, height);
	mlx_resize_image(game->game_over.img, width, height);
	mlx_resize_image(game->you_win.img, width, height);
	mlx_resize_image(game->loser_greedy.img1, width, height);
	mlx_resize_image(game->loser_greedy.img2, width, height);
	mlx_resize_image(game->loser_greedy.img3, width, height);
	mlx_resize_image(game->loser_greedy.img4, width, height);
}
