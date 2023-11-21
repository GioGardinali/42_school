/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:46:16 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/20 22:56:54 by gigardin         ###   ########.fr       */
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
#  define TILE_SIZE 86
# endif

# ifndef IMAGE_WIDTH
#  define IMAGE_WIDTH 86
# endif

# ifndef IMAGE_HEIGHT
#  define IMAGE_HEIGHT 86
# endif

# define TRUE 1
# define FALSE 0
# define WIDHT_SCREEN 1920
# define HEIGHT_SCREEN 1080

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

typedef struct s_content
{
	mlx_texture_t	*ground;
	mlx_image_t		*ground_1;
	mlx_texture_t	*wall;
	mlx_image_t		*wall_1;
	mlx_texture_t	*money_enemy;
	mlx_image_t		*money_enemy_1;
	mlx_texture_t	*win_portal;
	mlx_image_t		*win_portal_1;
	mlx_texture_t	*portal;
	mlx_image_t		*portal_1;
	mlx_texture_t	*happiness;
	mlx_image_t		*happiness_1;
	mlx_texture_t	*game_over;
	mlx_image_t		*game_over_1;
	mlx_texture_t	*loser_greedy;
	mlx_image_t		*loser_greedy_1;
	mlx_texture_t	*you_win;
	mlx_image_t		*you_win_1;
	mlx_texture_t	*human;
	mlx_image_t		*human_1;	
}	t_content;

// struct for all datas
typedef struct s_data
{
	mlx_t			*mlx;
	int				moves;
	int				p_direction;
	int				windows_width;
	int				windows_height;
	int				config_stage;
	t_content		*content;
	t_map			*map;
	t_map			*map_clone;
	int				human_init_x;
	int				human_init_y;
	int				portal_init_x;
	int				portal_init_y;
}	t_data;

void		read_map(int argc, t_data *game);
int			map_outline_value(char *line, t_data *game);

void		validate_content_map( t_data *game);

void		check_valid_path(t_data *game);
void		check_sides(t_data *game, int refe_x, int refe_y, t_map *seen_flag);

void		initiate_game(t_data *game);
void		check_images(t_data *game);

int32_t		create_texture_from_png(t_data *game);

void		create_img_from_texture(t_data *game);
void		resize_of_image(t_data *game);

void		move_up(t_data *game, int human_x, int human_y);
void		move_down(t_data *game, int human_x, int human_y);
void		move_left(t_data *game, int human_x, int human_y);
void		move_right(t_data *game, int human_x, int human_y);

void		hook_move_player(mlx_key_data_t keydata, void *parameter);
void		hook_close_window(void *key);
void		render_map_game(t_data *game, int x, int y);
void		render_hook_map(t_data *game);

void		render_exit(t_data *game, int x, int y);
void		render_ground(t_data *game, int x, int y);
void		render_wall(t_data *game, int x, int y);
void		render_collectable(t_data *game, int x, int y);
void		render_human(t_data *game, int x, int y);
void		render_human_two(t_data *game, int x, int y);

void		render_money_enemy(t_data *game, int x, int y);
void		render_exit_win(t_data *game, int x, int y);
void		render_loser_greedy(t_data *game, int x, int y);
void		render_you_win(t_data *game, int x, int y);
void		render_game_over(t_data *game, int x, int y);

void		display_count_on_screen(t_data *game);

void		free_map(t_map *map);
void		free_images(t_data *game);
void		free_textures(t_data *game);

void		handle_error(int error_type, char *error_msg, t_data *game);
int			free_and_end_game(t_data *game);

#endif