/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:58:44 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/01 23:14:51 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	read_map(int argc, t_data *game)
{
	game->config_stage = 1;
	//criar check de mapa
	size_map(game);
}

static void	size_map(t_data *game)
{
	int		fd;
	int		map_outline;
	char	*line;

	game->map
}
