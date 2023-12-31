/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_content_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:41:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 18:14:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	parse_map(t_data *game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->map->rows)
	{
		x = 0;
		while (x < game->map->columns)
		{			
			if (ft_strchr("01CEP", game->map->grid_matrix[y][x]) == NULL)
				handle_error(0, "Map with invalid compoment!\n", game);
			else if (game->map->grid_matrix[y][x] == 'P')
				game->map->player_count++;
			else if (game->map->grid_matrix[y][x] == 'C')
				game->map->collect_count++;
			else if (game->map->grid_matrix[y][x] == 'E')
			{
				game->map->exit_count++;
				game->portal_init_y = y;
				game->portal_init_x = x;
			}
			x++;
		}
		y++;
	}	
}

static void	check_count_content(t_data *game)
{
	if (game->map->player_count != 1)
		handle_error(0, "You must have one starting position! \n", game);
	if (game->map->collect_count < 1)
		handle_error(0, "You must have at least one collectible \n", game);
	if (game->map->exit_count != 1)
		handle_error(0, "You must have only one exit in the Map! \n", game);
}

static void	check_wall(t_data *game)
{
	int	i;
	int	columns;
	int	rows;

	i = 0;
	columns = game->map->columns;
	rows = game->map->rows;
	while (i < columns)
	{
		if (game->map->grid_matrix[0][i] != '1' ||
			game->map->grid_matrix[rows - 1][i] != '1')
			handle_error(0, "The map must have surrounded by Walls \n", game);
		i++;
	}
	i = 0;
	while (i < rows)
	{
		if (game->map->grid_matrix[i][0] != '1' ||
			game->map->grid_matrix[i][columns - 1] != '1')
			handle_error(0, "The map must have surrounded by Walls \n", game);
		i++;
	}
}
//criar check de validação para o cenário de duas paredes, onde uma delas
// tem o 0 em vez de 1

void	validate_content_map( t_data *game)
{
	game->config_stage = 2;
	game->map->player_count = 0;
	game->map->collect_count = 0;
	game->map->exit_count = 0;
	parse_map(game);
	check_count_content(game);
	check_wall(game);
}
