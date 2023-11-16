/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_render_game_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:01:23 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/15 23:51:49 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	render_money_enemy(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 5)
		mlx_image_to_window(game->mlx, game->money_enemy.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 5 && i <= REPEAT_FRAME * 10)
		mlx_image_to_window(game->mlx, game->money_enemy.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 10 && i <= REPEAT_FRAME * 15)
		mlx_image_to_window(game->mlx, game->money_enemy.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 15 && i <= REPEAT_FRAME * 20)
		mlx_image_to_window(game->mlx, game->money_enemy.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}

void	render_exit_win(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 5)
		mlx_image_to_window(game->mlx, game->win_portal.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 5 && i <= REPEAT_FRAME * 10)
		mlx_image_to_window(game->mlx, game->win_portal.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 10 && i <= REPEAT_FRAME * 15)
		mlx_image_to_window(game->mlx, game->win_portal.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 15 && i <= REPEAT_FRAME * 20)
		mlx_image_to_window(game->mlx, game->win_portal.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}

void	render_loser_greedy(t_data *game, int x, int y)
{
	static int	i;

	if (i >= 0 && i <= REPEAT_FRAME * 5)
		mlx_image_to_window(game->mlx, game->loser_greedy.img1, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 5 && i <= REPEAT_FRAME * 10)
		mlx_image_to_window(game->mlx, game->loser_greedy.img2, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 10 && i <= REPEAT_FRAME * 15)
		mlx_image_to_window(game->mlx, game->loser_greedy.img3, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 15 && i <= REPEAT_FRAME * 20)
		mlx_image_to_window(game->mlx, game->loser_greedy.img4, x * IMAGE_WIDTH,
			y * IMAGE_HEIGHT);
	if (i > REPEAT_FRAME * 20)
		i = 0;
	i++;
}

void	render_you_win(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->you_win.img, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}

void	render_game_over(t_data *game, int x, int y)
{
	mlx_image_to_window(game->mlx, game->game_over.img, x * IMAGE_WIDTH,
		y * IMAGE_HEIGHT);
}
