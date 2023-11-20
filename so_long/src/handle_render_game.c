/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_render_game.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:01:23 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 17:41:41 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	render_ground(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->content->ground_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}

void	render_wall(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->content->wall_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}

void	render_collectable(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->content->ground_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
	mlx_image_to_window(game->mlx, game->content->happiness_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}

void	render_human(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->content->ground_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
	mlx_image_to_window(game->mlx, game->content->human_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}

void	render_exit(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->content->ground_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
	mlx_image_to_window(game->mlx, game->content->portal_1, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
	game->content->portal_1->enabled = false;
}
