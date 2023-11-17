/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:46:16 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/17 02:09:27 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h" // my libft
# include "../MLX42/include/MLX42/MLX42.h"
# include <stdlib.h> // malloc, free, size_t, NULL
# include <fcntl.h> // open, close
# include <unistd.h> //write, read
/*Macros*/
# ifndef TILE_SIZE
#  define TILE_SIZE 64
# endif

# ifndef REPEAT_FRAME
#  define REPEAT_FRAME 90
# endif

# ifndef IMAGE_WIDTH
#  define IMAGE_WIDTH 64
# endif

# ifndef IMAGE_HEIGHT
#  define IMAGE_HEIGHT 64
# endif

# define TRUE 1
# define FALSE 0

/*Sprites - brackground*/
# define GROUND_1 "./images/ground_1.png"
# define GROUND_2 "./images/ground_2.png"
# define GROUND_3 "./images/ground_3.png"
# define GROUND_4 "./images/ground_4.png"

/*Sprites - collectible*/
# define COLLECT_1 "./images/collect_1.png"
# define COLLECT_2 "./images/collect_2.png"
# define COLLECT_3 "./images/collect_3.png"
# define COLLECT_4 "./images/collect_4.png"

/*Sprites - player*/
# define PLAYER_UP "./images/player_up.png"
# define PLAYER_R "./images/player_right.png"
# define PLAYER_L "./images/player_left.png"
# define PLAYER_D "./images/player_down.png"

/*Sprites - enemy*/
# define ENEMY_1 "./images/enemy_1.png"
# define ENEMY_2 "./images/enemy_2.png"
# define ENEMY_3 "./images/enemy_3.png"
# define ENEMY_4 "./images/enemy_4.png"

/*Sprites - Wall*/
# define WALL_1 "./images/wall_1.png"
# define WALL_2 "./images/wall_2.png"
# define WALL_3 "./images/wall_3.png"
# define WALL_4 "./images/wall_4.png"

/*Sprites - exit_win*/
# define WIN_PORTAL1 "./images/exit_1.png"
# define WIN_PORTAL2 "./images/exit_2.png"
# define WIN_PORTAL3 "./images/exit_3.png"
# define WIN_PORTAL4 "./images/exit_4.png"

/*Sprites - exit_visible*/
# define PORTAL1 "./images/exit_p_1.png"
# define PORTAL2 "./images/exit_p_2GAME.png"
# define PORTAL3 "./images/exit_p_1.png"
# define PORTAL4 "./images/exit_p_2.png"

/*Sprites - player_loser*/
# define LOSER_GREEDY1 "./images/loser_1.png"
# define LOSER_GREEDY2 "./images/loser_2.png"
# define LOSER_GREEDY3 "./images/loser_3.png"
# define LOSER_GREEDY4 "./images/loser_4.png"

/*Sprites - game_over*/
# define GAME_OVER "./images/game_over.png"

/*Sprites - game_win*/
# define GAME_WIN "./images/game_win.png"

// struct for map
typedef struct s_map
{
	char	*file;
	char	**grid_matrix;
	int		columns;
	int		rows;
	int		player_count;
	int		collect_count;
	int		exit_count;
	int		valid_path;
}	t_map;

typedef struct s_direction
{
	int	x[4];
	int	y[4];
}	t_direction;

// struct for animate images
typedef struct s_animate
{
	void	*img1;
	void	*img2;
	void	*img3;
	void	*img4;
	int		width;
	int		height;
	int		x;
	int		y;
	char	*texture1;
	char	*texture2;
	char	*texture3;
	char	*texture4;
}	t_animate;

// struct for player movement
typedef struct s_player
{
	void	*f_img;
	void	*r_img;
	void	*l_img;
	void	*b_img;
	int		width;
	int		height;
	int		x;
	int		y;
	char	*f_texture;
	char	*r_texture;
	char	*l_texture;
	char	*b_texture;
	int		direction;
	int		move_count;
}	t_player;

// struct for configuration images
typedef struct s_sprite
{
	void	*img;
	char	*path;
	int		width;
	int		height;
	int		x;
	int		y;
	char	*texture;
}	t_sprite;

// struct for all datas
typedef struct s_data
{
	mlx_t		*mlx;
	int			windows_width;
	int			windows_height;
	int			config_stage;
	t_player	human;
	t_animate	ground;
	t_animate	wall;
	t_animate	money_enemy;
	t_animate	win_portal;
	t_animate	portal;
	t_sprite	swall;
	t_sprite	shappiness;
	t_animate	happiness;
	t_sprite	game_over;
	t_map		map;
	t_animate	loser_greedy;
	t_sprite	you_win;
	mlx_image_t	teste;
}	t_data;

void		read_map(int argc, t_data *game);

void		validate_content_map( t_data *game);

void		check_valid_path(t_data *game);
void		check_sides(t_data *game, int refe_x, int refe_y, t_map *seen_flag);

void		initiate_game(t_data *game);
void		call_images(t_data *game);
void		check_images(t_data *game);

int			create_new_player_image(t_data *game);
int32_t		create_texture_from_png_one(t_data *game);
int32_t		create_texture_from_png_two(t_data *game);
int32_t		create_texture_from_png_three(t_data *game);

void		create_img_from_texture_one(t_data *game);
void		create_img_from_texture_two(t_data *game);
void		create_img_from_texture_three(t_data *game);
void		resize_of_image_one(t_data *game);
void		resize_of_image_two(t_data *game);

void		move_up(t_data *game, t_player *human);
void		move_down(t_data *game, t_player *human);
void		move_left(t_data *game, t_player *human);
void		move_right(t_data *game, t_player *human);

void		hook_move_player(mlx_key_data_t keydata, void *parameter);
void		hook_close_window(void *key);
void		render_map_game(t_data *game, int x, int y);
int			render_hook_map(t_data *game);

void		render_exit(t_data *game, int x, int y);
void		render_ground(t_data *game, int x, int y);
void		render_wall(t_data *game, int x, int y);
void		render_collectable(t_data *game, int x, int y);
void		render_human(t_data *game, int x, int y);
void		render_money_enemy(t_data *game, int x, int y);
void		render_exit_win(t_data *game, int x, int y);
void		render_loser_greedy(t_data *game, int x, int y);
void		render_you_win(t_data *game, int x, int y);
void		render_game_over(t_data *game, int x, int y);

void		display_count_on_screen(t_data *game);

void		free_map(t_map *map);

void		handle_error(int error_type, char *error_msg, t_data *game);
int			free_and_end_game(t_data *game);

#endif