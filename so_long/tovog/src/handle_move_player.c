/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_move_player.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:21:29 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 23:11:43 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	handle_next_move(t_data *game, int x, int y)
{
	int	i;

	i = 0;
	game->map->grid_matrix[game->human_init_y][game->human_init_x] = '0';
	render_human_two(game, x, y);
	ft_printf("Moves: %d\n", ++game->moves);
	if (game->map->grid_matrix[y][x] == 'C')
	{	
		game->content->happiness_1->instances[i].enabled = 0;
		game->map->collect_count--;
	}
	if (game->map->collect_count == 0)
	{
		game->map->grid_matrix[game->portal_init_y][game->portal_init_x] = 'E';
		game->content->portal_1->enabled = true;
		if (game->map->grid_matrix[y][x] == 'E')
		{
			ft_printf("%s\n", "WOW! You collected happiness along"
				"your journey!");
			free_and_end_game(game);
		}
	}
	game->map->grid_matrix[y][x] = 'P';
}

void	move_up(t_data *game, int human_x, int human_y)
{
	int	x;
	int	y;

	x = human_x;
	y = human_y - 1;
	if (game->map->grid_matrix[y][x] != '1')
	{
		handle_next_move(game, x, y);
		human_y--;
	}
}

void	move_down(t_data *game, int human_x, int human_y)
{
	int	x;
	int	y;

	x = human_x;
	y = human_y + 1;
	if (game->map->grid_matrix[y][x] != '1')
	{
		handle_next_move(game, x, y);
		human_y++;
	}
}

void	move_left(t_data *game, int human_x, int human_y)
{
	int	x;
	int	y;

	x = human_x - 1;
	y = human_y;
	render_human_two(game, x, y);
	if (game->map->grid_matrix[y][x] != '1')
		handle_next_move(game, x, y);
}

void	move_right(t_data *game, int human_x, int human_y)
{
	int	x;
	int	y;

	x = human_x + 1;
	y = human_y;
	render_human_two(game, x, y);
	if (game->map->grid_matrix[y][x] != '1')
		handle_next_move(game, x, y);
}
