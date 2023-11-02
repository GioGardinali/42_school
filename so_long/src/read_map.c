/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:58:44 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/02 06:02:01 by gigardin         ###   ########.fr       */
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

	game->map.columns = 0;
	game->map.rows = 0;
	map_outline = 0;
	fd = open(game->map.file, O_RDWR);
	line = ft_get_next_line(fd);
	game->map.columns = ft_strlen(line) - 1;
	while (line)
	{
		free(line);
		game->map.rows++;
		line = ft_get_next_line(fd);
		if (line && ft_strlen(line) - 1 != (size_t)game->map.columns)
			map_outline = 1;

	}
	if (map_outline == 1)
}
