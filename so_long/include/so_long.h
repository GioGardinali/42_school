/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:46:16 by gigardin          #+#    #+#             */
/*   Updated: 2023/10/30 20:41:59 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/*Macros*/
# ifndef TILE_SIZE
#  define TILE_SIZE 64
# endif

/*Sprites - brackground*/
# define GROUND1 "./images/ground_1.png"
# define GROUND2 "./images/ground_2.png"
# define GROUND3 "./images/ground_3.png"
# define GROUND4 "./images/ground_4.png"

/*Sprites - collectible*/
# define COLLECT1 "./images/collect_1.png"
# define COLLECT2 "./images/collect_2.png"
# define COLLECT3 "./images/collect_3.png"
# define COLLECT4 "./images/collect_4.png"

/*Sprites - player*/
// # define PLAYER_UP "./images/player_up.png"
// # define PLAYER_R "./images/player_right.png"
// # define PLAYER_L "./images/player_left.png"
// # define CPLAYER_D "./images/player_down.png"

/*Sprites - enemy*/
# define ENEMY_1 "./images/enemy_1.png"
# define ENEMY_2 "./images/enemy_2.png"
# define ENEMY_3 "./images/enemy_3.png"
# define ENEMY_4 "./images/enemy_4.png"

/*Sprites - player_loser*/
// # define LOSER1 "./images/loser_1.png"
// # define LOSER2 "./images/loser_2.png"
// # define LOSER3 "./images/loser_3.png"

/*Sprites - exit_win*/
// # define WIN_PORTAL1 "./images/win_portal1.png"
// # define WIN_PORTAL2 "./images/win_portal2.png"
// # define WIN_PORTAL3 "./images/win_portal3.png"
// # define WIN_PORTAL4 "./images/win_portal4.png"

// struct for animate images
typedef struct s_animate
{
	void	*ptr1;
	void	*ptr2;
	void	*ptr3;
	void	*ptr4;
	int		width;
	int		height;
}	t_animate;

// struct for player movement
typedef struct s_player
{
	void	*f_ptr;
	void	*r_ptr;
	void	*l_ptr;
	void	*b_ptr;
	int		width;
	int		height;
	int		x;
	int		y;
	int		direction;
	int		move_count;
}	t_player;

// struct for configuration images
typedef struct s_sprite
{
	void	*ptr;
	char	*path;
	int		width;
	int		height;
	int		x;
	int		y;
}	t_sprite;

// struct for all datas

typedef struct s_data
{
	t_player	human;
	t_animate	ground;
	t_animate	wall;
	t_animate	money_enemy;
	t_animate	win_portal;
	t_animate	happiness;
	t_sprite	game_over;
	// t_animate	loser_greedy;
	// t_sprite	you_win;
	// t_map		map;
	// int			config_stage;
	// void		*mlx42_connection;
	// t_win		win;
}	t_data;

#endif