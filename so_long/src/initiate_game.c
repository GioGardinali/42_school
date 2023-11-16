/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:30 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/16 16:01:40 by gigardin         ###   ########.fr       */
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

	game->mlx = NULL;
	mlx_get_monitor_size(0, &screen_width, &screen_height);
	//mlx_get_screen_size(game->mlx_connection, &screen_width, &screen_height);
	game->windows_width = game->map.columns * TILE_SIZE;
	game->windows_height = game->map.rows * TILE_SIZE;
	if (game->windows_width > screen_width || game->windows_height > screen_height)
		handle_error(0, "Map is too big for this screen!\n", game);
	game->win.mlx_win = mlx_new_window(game->mlx_connection,
			game->win.width, game->win.height, "SO LONG");
	if (game->win.mlx_win == NULL)
		handle_error(0, "mlx_new_window failed!\n", game);
}

void	initiate_game(t_data *game)
{
	game->mlx = mlx_init(game->map.columns, game->map.rows, "So_long", true);
	if (game->mlx == NULL)
		handle_error(0, "mlx_init failed!\n", game);
	game->config_stage = 3;
	call_images(game);
	check_images(game);
	init_window(game);
	game->config_stage = 4;
	game->map.grid_matrix[game->portal.y][game->portal.x] = '0';
}

void	call_images(t_data *game)
{
	create_new_player_image(game);
	create_texture_from_png_one(game);
	create_texture_from_png_two(game);
	create_texture_from_png_three(game);
	create_img_from_texture_one(game);
	create_img_from_texture_two(game);
	create_img_from_texture_three(game);
	resize_of_image_one(game);
	resize_of_image_two(game);
}

void	check_images(t_data *game)
{
	if (game->human.f_img == NULL || game->human.l_img == NULL
		|| game->human.r_img == NULL || game->human.b_img == NULL
		|| game->wall.img1 == NULL || game->wall.img2 == NULL
		|| game->wall.img3 == NULL || game->wall.img4 == NULL
		|| game->ground.img1 == NULL || game->ground.img2 == NULL
		|| game->ground.img3 == NULL || game->ground.img4 == NULL
		|| game->happiness.img1 == NULL || game->happiness.img2 == NULL
		|| game->happiness.img3 == NULL || game->happiness.img4 == NULL
		|| game->money_enemy.img1 == NULL || game->money_enemy.img2 == NULL
		|| game->money_enemy.img3 == NULL || game->money_enemy.img4 == NULL
		|| game->win_portal.img1 == NULL || game->win_portal.img2 == NULL
		|| game->win_portal.img3 == NULL || game->win_portal.img4 == NULL
		|| game->portal.img1 == NULL || game->portal.img2 == NULL
		|| game->portal.img3 == NULL || game->portal.img4 == NULL
		|| game->loser_greedy.img1 == NULL || game->loser_greedy.img2 == NULL
		|| game->loser_greedy.img3 == NULL || game->loser_greedy.img4 == NULL
		|| game->game_over.img == NULL || game->you_win.img == NULL)
		handle_error(0, "Image loading failed!\n", game);
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