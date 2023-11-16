/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_count_on_screen_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:24:49 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/16 14:34:48 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	display_count_on_screen(t_data *game)
{
	char	*move_count;
	char	*collect_count;
	int		x;

	x = game->map.columns * TILE_SIZE - 30;
	move_count = ft_itoa(game->human.move_count);
	collect_count = ft_itoa(game->map.collect_count);
	mlx_put_string(game->mlx, move_count, x, 45);
	mlx_put_string(game->mlx, collect_count, x, 113);
	free(move_count);
	free(collect_count);
}
