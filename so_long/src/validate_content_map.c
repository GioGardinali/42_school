/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_content_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:41:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/02 09:52:16 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	validate_content_map( t_data *game)
{
	game->config_stage = 2;
	game->map.player_count = 0;
	game->map.collect_count = 0;
	game->map.exit_count = 0;
	//parse_map(game);
	//check_cotent_count(game); 
	//check_map_walls(game); 
}
