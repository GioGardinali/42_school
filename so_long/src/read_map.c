/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:58:44 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/06 20:56:22 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	read_map(int argc, t_data *game)
{
	game->config_stage = 1;
	check_file_map(argc, game);
	//criar check de mapa
	size_map(game);
	allocate_content_map(game);
}

static void	check_file_map(int argc, t_data *game)
{
	int		fd;
	char	buffer[1];

	if (argc < 2)
		//error poucos argumentos;
	if (argc > 2)
		//error muitos argumentos;
	if (ft_strnstr(game->map.file, ".ber", ft_strlen(game->map.file)) == NULL)
		// error de não ter extensão .ber
	fd = open(game->map.file, O_RDWR);
	if (fd == -1)
		//error de fd;
	if (read(fd, buffer, 1) == 0)
	{
		close(fd);
		//error arquivo do mapa vazio;
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
		//função de erro, tem que criar
	}
	close(fd);
}

static void	allocate_content_map(t_data *game)
{
	int	fd;
	int	y;

	y = 0;
	game->map.grid_matrix = malloc((game->map.rows) * sizeof(char *));
	if (game->map.rows == NULL)
	{
		//colocar tratativa de erro
		ft_printf("%s", "Erro para malocar matriz");
	}
	fd = open(game->map.file, O_RDWR);
	while (y < game->map.rows)
	{
		game->map.grid_matrix[y] = ft_get_next_line;
		y++;
	}
	close (fd);
}
