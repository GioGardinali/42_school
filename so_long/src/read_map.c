/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:58:44 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/17 02:13:54 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	check_file_map(int argc, t_data *game)
{
	int		fd;
	char	buffer[1];

	if (argc < 2)
		handle_error(0, "You need to use: ./so_long <filename.ber>\n", game);
	if (argc > 2)
		handle_error(0, "You provided more arguments than necessary!\n", game);
	if (ft_strnstr(game->map.file, ".ber", ft_strlen(game->map.file)) == NULL)
		handle_error(0, "Map not in .ber extension!\n", game);
	fd = open(game->map.file, O_RDWR);
	if (fd == -1)
		handle_error(1, "Error!\n", game);
	if (read(fd, buffer, 1) == 0)
	{
		close(fd);
		handle_error(0, "Map file is empty!\n", game);
	}
	close(fd);
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
	{
		close(fd);
		handle_error(0, "Your Map must be rectangular!\n", game);
	}
	close(fd);
}

static void	allocate_content_map(t_data *game)
{
	int	fd;
	int	y;

	y = 0;
	game->map.grid_matrix = malloc((game->map.rows) * sizeof(char *));
	if (game->map.grid_matrix == NULL)
		handle_error(1, "Error\n", game);
	fd = open(game->map.file, O_RDWR);
	while (y < game->map.rows)
	{
		game->map.grid_matrix[y] = ft_get_next_line(fd);
		y++;
	}
	close (fd);
}

void	read_map(int argc, t_data *game)
{
	game->config_stage = 1;
	check_file_map(argc, game);
	size_map(game);
	allocate_content_map(game);
}
