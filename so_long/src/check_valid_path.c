/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:03:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/08 18:52:58 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_valid_path(t_data *game)
{
	t_map	seen_flag;

	seen_flag.valid_path = 0;
	seen_flag.collect_count = 0;
	allocate_flag_grid(game, &seen_flag);
	start_position(game, &seen_flag);
}

static void	allocate_flag_grid(t_data *game, t_map *seen_flag)
{
	int	y;

	y = 0;
	seen_flag->columns = game->map.columns;
	seen_flag->rows = game->map.rows;
	seen_flag->grid_matrix = ft_calloc(seen_flag->rows, sizeof(char));
	if (seen_flag->grid_matrix == NULL)
		handle_error(1, "Error!\n", game);
	while (y < game->map.rows)
	{
		seen_flag->grid_matrix[y] = ft_calloc(seen_flag->columns, sizeof(char));
		if (seen_flag->grid_matrix[y] == NULL)
		{
			y--;
			while (y >= 0)
				free(seen_flag->grid_matrix[y--]);
			free(seen_flag->grid_matrix);
			handle_error(1, "Error!\n", game);
		}
		y++;
	}
}

static void	start_position(t_data *game, t_map *seen_flag)
{

}
