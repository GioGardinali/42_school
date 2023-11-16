/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_render_game.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:01:23 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/16 14:51:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	render_ground(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 5)
		mlx_image_to_window(game->mlx, game->ground.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 5 && i <= REPEAT_FRAME * 10)
		mlx_image_to_window(game->mlx, game->ground.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 10 && i <= REPEAT_FRAME * 15)
		mlx_image_to_window(game->mlx, game->ground.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 15 && i <= REPEAT_FRAME * 20)
		mlx_image_to_window(game->mlx, game->ground.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}

void	render_wall(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 5)
		mlx_image_to_window(game->mlx, game->wall.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 5 && i <= REPEAT_FRAME * 10)
		mlx_image_to_window(game->mlx, game->wall.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 10 && i <= REPEAT_FRAME * 15)
		mlx_image_to_window(game->mlx, game->wall.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 15 && i <= REPEAT_FRAME * 20)
		mlx_image_to_window(game->mlx, game->wall.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}

void	render_collectable(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 1)
		mlx_image_to_window(game->mlx, game->happiness.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 1 && i <= REPEAT_FRAME * 2)
		mlx_image_to_window(game->mlx, game->happiness.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 2 && i <= REPEAT_FRAME * 3)
		mlx_image_to_window(game->mlx, game->happiness.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 3 && i <= REPEAT_FRAME * 4)
		mlx_image_to_window(game->mlx, game->happiness.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 4)
		i = 0;
	i++;
}

void	render_human(t_data *game, int x, int y)
{
	game->human.y = y;
	game->human.x = x;
	if (game->human.direction == 'f')
		mlx_image_to_window(game->mlx, game->human.f_img, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (game->human.direction == 'r')
		mlx_image_to_window(game->mlx, game->human.r_img, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (game->human.direction == 'l')
		mlx_image_to_window(game->mlx, game->human.l_img, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (game->human.direction == 'b')
		mlx_image_to_window(game->mlx, game->human.b_img, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
}

void	render_exit(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 5)
		mlx_image_to_window(game->mlx, game->portal.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 5 && i <= REPEAT_FRAME * 10)
		mlx_image_to_window(game->mlx, game->portal.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 10 && i <= REPEAT_FRAME * 15)
		mlx_image_to_window(game->mlx, game->portal.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 15 && i <= REPEAT_FRAME * 20)
		mlx_image_to_window(game->mlx, game->portal.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}
