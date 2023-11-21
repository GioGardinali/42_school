/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 22:31:32 by gigardin         ###   ########.fr       */
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

void	free_images(t_data *game)
{
	mlx_delete_image(game->mlx, game->content->human_1);
	mlx_delete_image(game->mlx, game->content->wall_1);
	mlx_delete_image(game->mlx, game->content->ground_1);
	mlx_delete_image(game->mlx, game->content->happiness_1);
	mlx_delete_image(game->mlx, game->content->portal_1);
}

void	free_textures(t_data *game)
{
	mlx_delete_texture(game->content->human);
	mlx_delete_texture(game->content->wall);
	mlx_delete_texture(game->content->ground);
	mlx_delete_texture(game->content->happiness);
	mlx_delete_texture(game->content->portal);
}
