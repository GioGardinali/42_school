/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:30 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/15 19:07:11 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	get_init_window(t_data *game)
{
	int	screen_width;
	int	screen_height;

	game->win.mlx_win = NULL;
	game->win.width = game->map.columns * TILE_SIZE;
	game->win.height = game->map.rows * TILE_SIZE;
	//fazer tratativa de erro para o tamanho que a janela deveria abrir;
	game->mlx42_connection = mlx_init(game->win.width, game->win.height,
			"So_long", true);
	if (!game->mlx42_connection)
		//Construir erro
		ft_printf("Deu erro!");
	return (TRUE);
	//fazer tratativa de condicional para tamanho e tile correto;
}

// void get_size_window(t_data *game)
// {

// 	game->win.width = game->map.columns * TILE_SIZE;
// 	game->win.height = game->map.rows * TILE_SIZE;
// }

void	initiate_game(t_data *game)
{

}
static void	init_window(t_data *game)
{
	int	screen_width;
	int	screen_height;

	game->win.mlx_win = NULL;
	mlx_get_screen_size(game->mlx_connection, &screen_width, &screen_height);
	game->win.width = game->map.columns * TILE_SIZE;
	game->win.height = game->map.rows * TILE_SIZE;
	if (game->win.width > screen_width || game->win.height > screen_height)
		handle_error(0, "Map is too big for this screen!\n", game);
	game->win.mlx_win = mlx_new_window(game->mlx_connection,
			game->win.width, game->win.height, "SO LONG");
	if (game->win.mlx_win == NULL)
		handle_error(0, "mlx_new_window failed!\n", game);
}

void	initiate_game(t_data *game)
{
	game->mlx_connection = mlx_init();
	if (game->mlx_connection == NULL)
		handle_error(0, "mlx_init failed!\n", game);
	game->config_stage = 3;
	init_sprites_background(game);
	init_sprites_collectible_and_player(game);
	init_sprites_ending_and_enemy(game);
	if (game->space.ptr1 == NULL || game->space.ptr2 == NULL
		|| game->space.ptr3 == NULL || game->space.ptr4 == NULL
		|| game->asteroid.ptr == NULL || game->portal.ptr == NULL
		|| game->move_display.ptr == NULL || game->star_display.ptr == NULL
		|| game->star.ptr1 == NULL || game->star.ptr2 == NULL
		|| game->star.ptr3 == NULL || game->star.ptr4 == NULL
		|| game->astronaut.u_ptr == NULL || game->astronaut.d_ptr == NULL
		|| game->astronaut.r_ptr == NULL || game->astronaut.l_ptr == NULL
		|| game->you_win.ptr == NULL || game->win_portal.ptr1 == NULL
		|| game->win_portal.ptr2 == NULL || game->win_portal.ptr3 == NULL
		|| game->game_over.ptr == NULL || game->hole.ptr1 == NULL
		|| game->hole.ptr2 == NULL || game-> hole.ptr3 == NULL
		|| game->lose_hole.ptr1 == NULL || game->lose_hole.ptr2 == NULL
		|| game->lose_hole.ptr3 == NULL)
		handle_error(0, "XPM image loading failed!\n", game);
	init_window(game);
	game->config_stage = 4;
	game->map.grid[game->portal.y][game->portal.x] = '0';
}


static	int	map_to_window(t_window *window, t_game *game, char *str)
{
	if (map_is_rectangle(game) && right_tile_set(game))
	{
		get_size_window(game);
		validate_map(game, str);
		window->mlx = mlx_init(game->window_w, game->window_h, "So_long", true);
		if (!window->mlx)
			ft_error("Error\n - Fail to init the window\n");
		if (map_construct(window))
			draw_map(window, game);
		else
			ft_error("Error\n - Fail to construct the map\n");
		return (TRUE);
	}
	else
		return (FALSE);
}

int	game_init(char *str)
{
	t_game		game;
	t_window	window;

	ft_bzero(&game, sizeof(t_game));
	ft_bzero(&window, sizeof(t_window));
	window.game = &game;
	game.map = get_map(str);
	if (!map_to_window(&window, &game, str))
		ft_error("Error\n - The map must be rectangular have one player(P)" \
		"one exit(E) and at least one collectable(C)\n");
	mlx_loop_hook(window.mlx, &hook_close_window, &window);
	mlx_key_hook(window.mlx, &hook_player_movement, &window);
	mlx_loop(window.mlx);
	free_game(&window, &game);
	return (EXIT_SUCCESS);
}