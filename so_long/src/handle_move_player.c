/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_move_player.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:21:29 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/15 20:10:27 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	handle_next_moviment(t_data *game, t_player *human, int x, int y)
{
	human->move_count++;
	game->map.grid_matrix[human->y][human->x] = '0';
	if (game->map.grid_matrix[y][x] == 'C')
		game->map.collect_count--;
	if (game->map.collect_count == 0)
		game->map.grid_matrix[game->portal.y][game->portal.x] = 'E';
	if (game->map.grid_matrix[y][x] == 'E')
	{
		render_you_win_ending(game, x, y);
		end_game(game);
	}
	if (game->map.grid_matrix[y][x] == 'M')
	{
		render_you_loser_ending(game, x, y);
		end_game(game);
	}
	game->map.grid_matrix[y][x] = 'P';
}

void	move_up(t_data *game, t_player *human)
{
	int	x;
	int	y;

	human->direction = 'f';
	x = human->x;
	y = human->y - 1;
	if (game->map.grid_matrix[y][x] != '1')
	{
		handle_next_step(game, human, x, y);
		human->y--;
	}
}

void	move_down(t_data *game, t_player *human)
{
	int	x;
	int	y;

	human->direction = 'b';
	x = human->x;
	y = human->y + 1;
	if (game->map.grid_matrix[y][x] != '1')
	{
		handle_next_step(game, human, x, y);
		human->y++;
	}
}

void	move_left(t_data *game, t_player *human)
{
	int	x;
	int	y;

	human->direction = 'b';
	x = human->x - 1;
	y = human->y;
	if (game->map.grid_matrix[y][x] != '1')
	{
		handle_next_step(game, human, x, y);
		human->x--;
	}
}

void	move_right(t_data *game, t_player *human)
{
	int	x;
	int	y;

	human->direction = 'b';
	x = human->x + 1;
	y = human->y;
	if (game->map.grid_matrix[y][x] != '1')
	{
		handle_next_step(game, human, x, y);
		human->x++;
	}
}
