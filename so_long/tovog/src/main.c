/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:48:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 12:57:45 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_data			game;
	t_map			map;
	t_content		content;

	ft_memset(&game, 0, sizeof(t_data));
	ft_memset(&map, 0, sizeof(t_map));
	ft_memset(&content, 0, sizeof(t_content));
	game.map = &map;
	game.content = &content;
	game.map->file = argv[1];
	game.config_stage = 0;
	read_map(argc, &game);
	validate_content_map(&game);
	check_valid_path(&game);
	initiate_game(&game);
	free_and_end_game(&game);
}
