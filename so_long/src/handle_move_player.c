/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_move_player.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:21:29 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:36 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// static void	handle_next_move(t_data *game, mlx_image_t *human_1, int x, int y)
// {
// 	human->move_count++;
// 	game->map.grid_matrix[human_1->instances->y][human_1->instances->x] = '0';
// 	if (game->map.grid_matrix[y][x] == 'C')
// 		game->map.collect_count--;
// 	if (game->map.collect_count == 0)
// 		game->map.grid_matrix[game->portal_1->instances->y]
// 		[game->portal_1->instances->x] = 'E';
// 	if (game->map.grid_matrix[y][x] == 'E')
// 	{
// 		render_exit_win(game, x, y);
// 		render_you_win(game, x, y);
// 		end_game(game);
// 	}
// 	if (game->map.grid_matrix[y][x] == 'M')
// 	{
// 		render_loser_greedy(game, x, y);
// 		render_game_over(game, x, y);
// 		end_game(game);
// 	}
// 	game->map.grid_matrix[y][x] = 'P';
// }

// void	move_up(t_data *game, mlx_image_t *human_1)
// {
// 	int	x;
// 	int	y;

// 	human->direction = 'f';
// 	x = human->x;
// 	y = human->y - 1;
// 	if (game->map.grid_matrix[y][x] != '1')
// 	{
// 		handle_next_move(game, human_1, x, y);
// 		human->y--;
// 	}
// }

// void	move_down(t_data *game, mlx_image_t *human_1)
// {
// 	int	x;
// 	int	y;

// 	human->direction = 'b';
// 	x = human->x;
// 	y = human->y + 1;
// 	if (game->map.grid_matrix[y][x] != '1')
// 	{
// 		handle_next_move(game, human_1, x, y);
// 		human->y++;
// 	}
// }

// void	move_left(t_data *game, mlx_image_t *human_1)
// {
// 	int	x;
// 	int	y;

// 	human->direction = 'l';
// 	x = human->x - 1;
// 	y = human->y;
// 	if (game->map.grid_matrix[y][x] != '1')
// 	{
// 		handle_next_move(game, human_1, x, y);
// 		human->x--;
// 	}
// }

// void	move_right(t_data *game, mlx_image_t *human_1)
// {
// 	int	x;
// 	int	y;

// 	human->direction = 'r';
// 	x = human->x + 1;
// 	y = human->y;
// 	if (game->map.grid_matrix[y][x] != '1')
// 	{
// 		handle_next_move(game, human_1, x, y);
// 		human->x++;
// 	}
// }
