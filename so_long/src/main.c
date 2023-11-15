/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:48:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/15 19:05:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char *argv[])
{
	t_data	game;

	game.map.file = argv[1];
	game.config_stage = 0;
	read_map(argc, &game);
	validate_content_map(&game);
	check_valid_path(&game);
	initiate_game(&game);
	// mlx_hook(game.win.mlx_win, DestroyNotify, StructureNotifyMask,
	// 	&end_game, &game);
	// mlx_hook(game.win.mlx_win, KeyPress, KeyPressMask, &key_hook, &game);
	// mlx_loop_hook(game.mlx_connection, &render_hook, &game);
	// mlx_loop(game.mlx_connection);
	return (0);
}
