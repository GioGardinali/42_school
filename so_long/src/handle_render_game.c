/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_render_game.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:01:23 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/15 23:15:33 by gigardin         ###   ########.fr       */
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
		mlx_image_to_window(game->mlx, game->ground.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}



void	draw_layers(t_window *window, t_game *game, char type)
{
	int32_t	x;
	int32_t	y;

	y = 0;
	while (game->map[y] != NULL)
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			if (type == '0')
				mlx_image_to_window(window->mlx, window->background_img, x * IMAGE_WIDTH, y * IMAGE_HEIGHT);
			else if (game->map[y][x] == type)
			{
				if (type == 'P')
					mlx_image_to_window(window->mlx, window->player_img, x * IMAGE_WIDTH, y * IMAGE_HEIGHT);
				else if (type == 'C')
					mlx_image_to_window(window->mlx, window->collectable_img, x * IMAGE_WIDTH, y * IMAGE_HEIGHT);
				else if (type == '1')
					mlx_image_to_window(window->mlx, window->wall_img, x * IMAGE_WIDTH, y * IMAGE_HEIGHT);
				else if (type == 'E')
					mlx_image_to_window(window->mlx, window->exit_img, x * IMAGE_WIDTH, y * IMAGE_HEIGHT);
			}
			x++;
		}
		y++;
	}
}

void	draw_map(t_window *window, t_game *game)
{
	draw_layers(window, game, '0');
	draw_layers(window, game, '1');
	draw_layers(window, game, 'C');
	draw_layers(window, game, 'P');
}

int	map_construct(t_window *window)
{
	if (create_texture_from_png(window))
	{
		create_img_from_texture(window);
		return (TRUE);
	}
	else
		return (FALSE);
}