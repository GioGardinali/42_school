/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_content_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:41:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/08 15:44:59 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	validate_content_map( t_data *game)
{
	game->config_stage = 2;
	game->map.player_count = 0;
	game->map.collect_count = 0;
	game->map.exit_count = 0;
	parse_map(game);
	check_cotent_count(game);
	//check_map_walls(game); 
}

static void	parse_map(t_data *game)
{
	int	x;
	int	y;

	y = 0;
	while (x < game->map.columns)
	{
		if (ft_strchr("01CEPH", game->map.grid_matrix[y][x]) == NULL)
			handle_error(0, "Map with invalid compoment!\n", game);
		else if (game->map.grid_matrix[y][x] == 'P')
			game->map.player_count++;
		else if (game->map.grid_matrix[y][x] == 'C')
			game->map.collect_count++;
		else if (game->map.grid_matrix[y][x] == 'E')
		{
			game->map.exit_count++;
			game->portal.x = x;
			game->portal.y = y;
		}
		x++;
	}
	y++;
}

static void	check_count_content(t_data *game)
{
	if (game->map.player_count != 1)
		handle_error(0, "You must have only one player in the Map! \n", game);
	if (game->map.collect_count < 1)
		handle_error(0, "You must have at least one collectible \n", game);
	if (game->map.exit_count != 1)
		handle_error(0, "You must have only one exit in the Map! \n", game);
}
