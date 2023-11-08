/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_ending.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:04:31 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/08 11:06:56 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void handle_error(int error_type, char *error_msg, t_data *game)
{
	if (game->config_stage == 2)
		free_map(&game->map);
}