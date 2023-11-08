/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/08 11:02:23 by gigardin         ###   ########.fr       */
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
