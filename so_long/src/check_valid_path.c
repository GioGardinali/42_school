/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:03:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/10 16:52:43 by gigardin         ###   ########.fr       */
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
	check_neighbors(game, game->human.x, game->human.y, &seen_flag);
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

static void	start_position_player(t_data *game, t_map *seen_flag)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->map.rows)
	{
		x = 0;
		while (x < game->map.columns)
		{
			if (game->map.grid_matrix[y][x] == 'P')
			{
				game->human.x = x;
				game->human.y = y;
				seen_flag->grid_matrix[y][x] = 1;
			}
		}
		x++;
	}
	y++;
}

static char	check_valid_tile(t_data *game, int x, int y, t_map *seen_flag)
{
	char	check_valid;

	check_valid = 0;
	if (seen_flag->grid_matrix[y][x] == 0 && game->map.grid_matrix[y][x] != '1')
		check_valid = 1;
	seen_flag->grid_matrix[y][x] = 1;
	return (check_valid);
}
// Essa parte é onde inpedimos o caractere '1' de ser válido no mapa,
//assim o boneco não segue adiante, que vai ser na outra função.

void	check_neighbors(t_data *game, int refe_x, int refe_y, t_map *seen_flag)
{
	int			i;
	int			x;
	int			y;
	t_direction	direction;

	i = 0;
	direction = (t_direction){.x = {0, 1, 0, -1}, .y = {0, 1, 0, -1}};
	while (i <= 3)
	{
		x = refe_x + direction.x[i];
		y = refe_y + direction.y[i];
		if (x >= 0 && x < game->map.columns && y >= 0 && y < game->map.rows)
		{
			if (game->map.grid_matrix[y][x] == 'E')
				seen_flag->valid_path = 1;
			if (game->map.grid_matrix[y][x] == 'C')
				seen_flag->collect_count++;
			if (check_valid_tile(game, x, y, seen_flag) == 1)
				check_neighbors(game, x, y, seen_flag);
		}
		i++;
	}
}

// decompor a função abaixo para destrichar e escrever ela
//ela é uma função que vai checar os vizinhos, ou seja, o que tá em volta
//do boneco, dessa forma, eu conto o número de coletáveis pegos se eu estiver
//em um coletável até está tudo coletado
//entender como coordenadas funciona